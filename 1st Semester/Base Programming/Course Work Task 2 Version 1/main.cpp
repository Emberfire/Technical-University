#include <iostream>

void insertData(std::string guides[30][6]);

void printArray(std::string guides[30][6]);

int main() {
    std::string guides[30][6];
    int command;

    std::cout << "Please select a command from the menu and write its number:\n"
              << "\t1. Add a guide\n"
              << "\t2. \n"
              << "\t3. \n"
              << "\t4. \n"
              << "\t5. End the program.\n";

    std::cin >> command;

    while (command != 5) {
        switch (command) {
            case 1:
                insertData(guides);
                break;
            case 2:

                break;
            case 3:
                break;
            case 4:
                break;
            default:
                std::cout << "Error, invalid command.";
        }

        std::cout << "Please select a new command:";
        std::cin >> command;
    }
}

void insertData(std::string guides[30][6]) {
    std::string firstName;
    std::cout << "Enter the guide's first name: ";
    std::cin >> firstName;

    std::string lastName;
    std::cout << "Enter the guide's last name: ";
    std::cin >> lastName;

    std::string sex;
    std::cout << "Enter the guide's sex (Male/Female): ";
    std::cin >> sex;
    while (sex != "Male" && sex != "Female") {
        std::cout << "The sex entered is invalid. Please enter a valid one: ";
        std::cin >> sex;
    }

    std::string birthDate;
    std::cout << "Enter the guide's birth date: ";
    std::cin >> birthDate;

    std::string country;
    std::cout << "Enter the guide's country of origin: ";
    std::cin >> country;

    std::string income;
    std::cout << "Enter the guide's total income: ";
    std::cin >> income;

    printArray(guides);
}

void printArray(std::string guides[30][6]) {
    std::cout << "\tGuides:\n";
    for (int i = 0; i < 30; ++i) {
        if (!guides[i][0].empty()) {
            std::printf("\t\t%s %s\n\t\t\t%s\n\t\t\tBorn on %s\n\t\t\tFrom %s\n\t\t\tIncome: %s\n",
                        guides[i][0].c_str(),
                        guides[i][1].c_str(),
                        guides[i][2].c_str(),
                        guides[i][3].c_str(),
                        guides[i][4].c_str(),
                        guides[i][5].c_str());
        }
    }
}