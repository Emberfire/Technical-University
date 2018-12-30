//Task 2: create a program with a function main() and a choice between functions via menu:
//  1.      Entering a number of guides(their information) in an array and a file with
//      a maximum of 30 guides. Information contains their name, family name, sex, birth date,
//      country, number and a total of their income.
//  2.      Search of a specific guide by name and birth date, or display that there is no
//      information for said guide in the database.
//  3.      Printing on the console of every guide in a country, provided by the console,
//      or printing that there are no guides from that country.

#include <iostream>
#include <fstream>

//Declaring the struct of the guide that's used with its properties
struct Guide {
    std::string firstName;
    std::string lastName;
    std::string sex;
    std::string birthDate;
    std::string country;
    double income;
};

//Declaring the prototypes of the functions called in the main
void insertData(Guide guides[30]);

void printArray(Guide guides[30]);

void searchByFamilyNameAndBirthday(Guide guides[30]);

void searchByCountries(Guide guides[30]);

int main() {
    //Declaring the array of structs, used to store the information
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
            default:
                std::cout << "Error, invalid command.\n";
        }

        std::cout << "Please select a new command: ";
        std::cin >> command;
    }
}

//Takes a single instance of a struct and writes it to a txt file
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

//Accepts user input from the console and saves it in the array of structs
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

    //Checks if the sex is invalid
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

    //Assigning properties to an instance of the struct, that will be added to the array
    Guide guide;
    guide.firstName = firstName;
    guide.lastName = lastName;
    guide.sex = sex;
    guide.birthDate = birthDate;
    guide.country = country;
    guide.income = income;

    //Checking the array if there is an empty slot for the struct to be added
    for (int i = 0; i < 30; ++i) {
        if (guides[i].firstName.empty()) {
            guides[i] = guide;
            break;
        }
    }

    printArray(guides);
    //Calling the function above to put the struct in the file
    insertDataInFile(guide);
}

//Prints the array on the console
void printArray(Guide guides[30]) {
    std::cout << "\tGuides:\n";
    for (int i = 0; i < 30; ++i) {
        if (!guides[i].firstName.empty()) {
            std::printf("\t\t%s %s\n\t\t%s\n\t\tBorn on %s\n\t\tFrom %s\n\t\tIncome: %f\n\n",
                        //Using c_str() to convert to the old type of string in C++ (needed)
                        guides[i].firstName.c_str(),
                        guides[i].lastName.c_str(),
                        guides[i].sex.c_str(),
                        guides[i].birthDate.c_str(),
                        guides[i].country.c_str(),
                        guides[i].income);
        }
    }
}

//Searches the array for an entry with the data provided and prints it on the console
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

//Displays all the entries in the array with a country, provided by the console input
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