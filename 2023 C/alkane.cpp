//#include <iostream>
//#include <string>
//
//std::string carbonCompoundName(int n) {
//    // Array of names for alkanes with 1 to 10 carbon atoms
//    const std::string names[] = {
//        "Methane", "Ethane", "Propane", "Butane", "Pentane",
//        "Hexane", "Heptane", "Octane", "Nonane", "Decane"
//    };
//
//    // Check if the number of carbon atoms is within the valid range
//    if (n < 1 || n > 10) {
//        return "Invalid number of carbon atoms.";
//    }
//
//    // Return the name of the corresponding compound
//    return names[n - 1];
//}
//
//int main() {
//    int n;
//    std::cout << "Enter the number of carbon atoms (1-10): ";
//    std::cin >> n;
//
//    std::string name = carbonCompoundName(n);
//    std::cout << "The name of the compound with " << n << " carbon atoms is: " << name << std::endl;
//
//    return 0;
//}

#include <iostream>
#include <string>

std::string carbonCompoundName(int n) {
    // Array of names for alkanes with 1 to 10 carbon atoms
    const std::string names[] = {
        "Methane", "Ethane", "Propane", "Butane", "Pentane",
        "Hexane", "Heptane", "Octane", "Nonane", "Decane"
    };

    // Array of basic structures for alkanes with 1 to 10 carbon atoms
    const std::string structures[] = {
        "H\n|\nC", "H     H\n|     |\nC--C", "H     H     H\n|     |     |\nC--C--C",
        "H     H     H     H\n|     |     |     |\nC--C--C--C", "H     H     H     H     H\n|     |     |     |     |\nC--C--C--C--C",
        "H     H     H     H     H     H\n|     |     |     |     |     |\nC--C--C--C--C--C",
        "H     H     H     H     H     H     H\n|     |     |     |     |     |     |\nC--C--C--C--C--C--C",
        "H     H     H     H     H     H     H     H\n|     |     |     |     |     |     |     |\nC--C--C--C--C--C--C--C",
        "H     H     H     H     H     H     H     H     H\n|     |     |     |     |     |     |     |     |\nC--C--C--C--C--C--C--C--C",
        "H     H     H     H     H     H     H     H     H     H\n|     |     |     |     |     |     |     |     |     |\nC--C--C--C--C--C--C--C--C--C"
    };

    // Check if the number of carbon atoms is within the valid range
    if (n < 1 || n > 10) {
        return "Invalid number of carbon atoms.";
    }

    // Return the name of the corresponding compound and its basic structure
    return names[n - 1] + "\n" + structures[n - 1];
}

int main() {
    int n;
    std::cout << "Enter the number of carbon atoms (1-10): ";
    std::cin >> n;

    std::string nameAndStructure = carbonCompoundName(n);
    std::cout << "\nThe name and basic structure of the compound with " << n << " carbon atoms:\n\n"
              << nameAndStructure << std::endl;

    return 0;
}
