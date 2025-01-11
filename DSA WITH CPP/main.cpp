#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "\n===== To-Do List Menu =====" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Delete Task" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

// Function to add a task
void addTask(vector<string> &tasks) {
    string task;
    cout << "\nEnter the task: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, task);
    tasks.push_back(task);
    cout << "Task added successfully!" << endl;
}

// Function to view tasks
void viewTasks(const vector<string> &tasks) {
    if (tasks.empty()) {
        cout << "\nNo tasks found!" << endl;
    } else {
        cout << "\n===== Your Tasks =====" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

// Function to delete a task
void deleteTask(vector<string> &tasks) {
    if (tasks.empty()) {
        cout << "\nNo tasks to delete!" << endl;
        return;
    }

    int taskNumber;
    cout << "\nEnter the task number to delete: ";
    cin >> taskNumber;

    if (taskNumber < 1 || taskNumber > tasks.size()) {
        cout << "Invalid task number!" << endl;
    } else {
        tasks.erase(tasks.begin() + taskNumber - 1);
        cout << "Task deleted successfully!" << endl;
    }
}

int main() {
    vector<string> tasks; // Vector to store tasks
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                deleteTask(tasks);
                break;
            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
