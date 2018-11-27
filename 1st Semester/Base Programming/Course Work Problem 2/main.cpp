#include <iostream>

class Guide;

void insertData();

int main() {
    Guide guides[30];
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
                insertData();
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

class Guide {
private:
    std::string firstName;
    std::string lastName;
    int sex;
    std::string birthDate;
    std::string country;
    double income;

};

void insertData() {

}