#include <iostream>
#include <fstream>

struct Guide {
    std::string firstName;
    std::string lastName;
    std::string sex;
    std::string birthDate;
    std::string country;
    double income;
};

void insertData(Guide guides[30]);

void printArray(Guide guides[30]);

void searchByFamilyNameAndBirthday(Guide guides[30]);

void searchByCountries(Guide guides[30]);

int main() {
    Guide guides[30];

    int command;

    std::cout << "Please select a command from the menu and write its number:\n"
              << "\t1. Add a guide\n"
              << "\t2. Search guides by family name and birthday\n"
              << "\t3. Search guides by country\n"
              << "\t4. End the program.\n";

    std::cin >> command;

    while (command != 4) {
        switch (command) {
            case 1:
                insertData(guides);
                break;
            case 2:
                searchByFamilyNameAndBirthday(guides);
                break;
            case 3:
                searchByCountries(guides);
                break;
            case 4:
                break;
            default:
                std::cout << "Error, invalid command.\n";
        }

        std::cout << "Please select a new command: ";
        std::cin >> command;
    }
}

void insertDataInFile(Guide guide) {
    std::ofstream guidesFile;
    guidesFile.open("guides.txt", std::ios::app);
    guidesFile << guide.firstName << '\n';
    guidesFile << guide.lastName << '\n';
    guidesFile << guide.sex << '\n';
    guidesFile << guide.birthDate << '\n';
    guidesFile << guide.country << '\n';
    guidesFile << guide.income << '\n';
    guidesFile.close();
}

void insertData(Guide guides[30]) {
    std::string firstName;
    std::string lastName;
    std::string sex;
    std::string birthDate;
    std::string country;
    double income;

    std::cout << "Enter the guide's first name: ";
    std::cin >> firstName;

    std::cout << "Enter the guide's last name: ";
    std::cin >> lastName;

    std::cout << "Enter the guide's sex (Male/Female): ";
    std::cin >> sex;
    while (sex != "Male" && sex != "Female") {
        std::cout << "The sex entered is invalid. Please enter a valid one: ";
        std::cin >> sex;
    }

    std::cout << "Enter the guide's birth date: ";
    std::cin >> birthDate;

    std::cout << "Enter the guide's country of origin: ";
    std::cin >> country;

    std::cout << "Enter the guide's total income: ";
    std::cin >> income;

    Guide guide;
    guide.firstName = firstName;
    guide.lastName = lastName;
    guide.sex = sex;
    guide.birthDate = birthDate;
    guide.country = country;
    guide.income = income;

    for (int i = 0; i < 30; ++i) {
        if (guides[i].firstName.empty()) {
            guides[i] = guide;
            break;
        }
    }

    printArray(guides);
    insertDataInFile(guide);
}

void printArray(Guide guides[30]) {
    std::cout << "\tGuides:\n";
    for (int i = 0; i < 30; ++i) {
        if (!guides[i].firstName.empty()) {
            std::printf("\t\t%s %s\n\t\t%s\n\t\tBorn on %s\n\t\tFrom %s\n\t\tIncome: %f\n\n",
                        guides[i].firstName.c_str(),
                        guides[i].lastName.c_str(),
                        guides[i].sex.c_str(),
                        guides[i].birthDate.c_str(),
                        guides[i].country.c_str(),
                        guides[i].income);
        }
    }
}

void searchByFamilyNameAndBirthday(Guide guides[30]) {
    std::string familyName;
    std::string birthday;

    std::cout << "Enter family name: ";
    std::cin >> familyName;

    std::cout << "Enter birthday: ";
    std::cin >> birthday;

    bool hasEntry = false;
    for (int i = 0; i < 30; ++i) {
        if (guides[i].lastName == familyName && guides[i].birthDate == birthday) {
            std::printf("\t\t%s %s\n\t\t%s\n\t\tBorn on %s\n\t\tFrom %s\n\t\tIncome: %f\n\n",
                        guides[i].firstName.c_str(),
                        guides[i].lastName.c_str(),
                        guides[i].sex.c_str(),
                        guides[i].birthDate.c_str(),
                        guides[i].country.c_str(),
                        guides[i].income);
            hasEntry = true;
        }
    }

    if (!hasEntry) {
        std::cout << "No entries found.\n";
    }
}

void searchByCountries(Guide guides[30]) {
    std::string country;
    std::cout << "Enter country: ";
    std::cin >> country;

    bool hasEntry = false;
    for (int i = 0; i < 30; ++i) {
        if (guides[i].country == country) {
            std::printf("\t\t%s %s\n\t\t%s\n\t\tBorn on %s\n\t\tFrom %s\n\t\tIncome: %f\n\n",
                        guides[i].firstName.c_str(),
                        guides[i].lastName.c_str(),
                        guides[i].sex.c_str(),
                        guides[i].birthDate.c_str(),
                        guides[i].country.c_str(),
                        guides[i].income);
            hasEntry = true;
        }
    }

    if (!hasEntry) {
        std::cout << "No entries found.\n";
    }
}