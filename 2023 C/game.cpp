#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

class Player {
private:
    std::string name;
    int health;
    int score;

public:
    Player(const std::string& playerName) : name(playerName), health(100), score(0) {}

    void takeDamage(int damage) {
        health -= damage;
    }

    void increaseScore(int points) {
        score += points;
    }

    bool isAlive() const {
        return health > 0;
    }

    void displayStats() const {
        std::cout << "Player: " << name << "\nHealth: " << health << "\nScore: " << score << std::endl;
    }
};

class Enemy {
private:
    std::string name;
    int health;
    int damage;

public:
    Enemy(const std::string& enemyName, int enemyHealth, int enemyDamage)
        : name(enemyName), health(enemyHealth), damage(enemyDamage) {}

    bool isAlive() const {
        return health > 0;
    }

    void attack(Player& player) {
        player.takeDamage(damage);
        std::cout << name << " attacks! You lose " << damage << " health points!" << std::endl;
    }
};

class Game {
private:
    Player player;
    std::vector<Enemy> enemies;

public:
    Game(const std::string& playerName) : player(playerName) {
        enemies.emplace_back("Dragon", 200, 30);
        enemies.emplace_back("Orc", 100, 20);
        enemies.emplace_back("Troll", 150, 25);
    }

    void run() {
        std::cout << "Welcome to the Text-Based RPG Game!" << std::endl;

        while (player.isAlive()) {
            displayGameStatus();
            playRound();
        }

        std::cout << "Game Over! Your final stats:" << std::endl;
        player.displayStats();
    }

private:
    void displayGameStatus() {
        std::cout << "\n----------------------------------------\n";
        player.displayStats();
        std::cout << "----------------------------------------\n" << std::endl;
    }

    void playRound() {
        int enemyIndex = rand() % enemies.size();
        Enemy& enemy = enemies[enemyIndex];
        std::string enemyName = enemy.getName(); // Add a getter function to get the enemy name

        std::cout << "You encountered a " << enemyName << "!\n";

        while (enemy.isAlive() && player.isAlive()) {
            std::cout << "Choose your action:\n1. Attack\n2. Run\n";
            int choice;
            std::cin >> choice;

            if (choice == 1) {
                player.increaseScore(10);
                enemy.attack(player);
            } else if (choice == 2) {
                std::cout << "You escaped from the " << enemyName << "!\n";
                break;
            } else {
                std::cout << "Invalid choice! Try again.\n";
            }

            if (enemy.isAlive()) {
                player.attack(enemy);
            }
        }
    }
};

int main() {
    std::string playerName;
    std::cout << "Enter your name: ";
    std::cin >> playerName;

    srand(static_cast<unsigned>(time(0)));

    Game game(playerName);
    game.run();

    return 0;
}
