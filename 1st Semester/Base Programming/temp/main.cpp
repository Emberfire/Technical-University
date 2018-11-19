//Programa s funktsiq main() i izbor chrez menu na funktsii za:
//1.Vuvejdane ot klaviatyra v masiv fakultetnite nomera (s proverka za korektnost) na studenti ot grupa (do 25 studenta);
//2.Formirane na nov masiv samo ot nechetnite fakultetni nomera i opredelqne na maksimalniq fakulteten nomer;
//3.Prezapisvane na vhodniq masiv v nov masiv i sortirane na tozi masiv vuv vuzhodqsht red;
//4.Izvejdane na ekran informaciq za suotvetniq masiv s poqsnitelen tekst.

#include <iostream>
#include <vector>

std::vector<int> facultyNumbers;

void addfacultyNumber();

void getOddFacultyNumber();

void sort();

int main() {
    int command;
    std::cout << "Please Enter Command: \n"
              << "1. Add faculty Number: \n"
              << "2. Get Odd Faculty Number: \n"
              << "3. Sort Faculty Numbers: \n\n";
    std::cin >> command;

    while (command != 5) {

        switch (command) {
            case 1:
                addfacultyNumber();
                break;

            case 2:
                getOddFacultyNumber();
                break;

            case 3:
                sort();
                break;


            default:
                std::cout << "\nInvalid Command\n";
        }
        std::cout << "Enter New Command";
        std::cin >> command;
    }
}

void addfacultyNumber() {
    if (facultyNumbers.size() == 25) {
        std::cout << "Full";
        return;
    }

    int facultyNumber;
    std::cout << "Please Enter Faculty Number";
    std::cin >> facultyNumber;

    for (int i = 0; i < facultyNumbers.size(); ++i) {
        if (facultyNumbers[i] == facultyNumber) {
            std::cout << "Already Written";
            return;
        }
    }

    facultyNumbers.push_back(facultyNumber);
}

void getOddFacultyNumber() {

    if (facultyNumbers.empty()) {
        std::cout << "No Faculty Numbers Found";
        return;
    }

    // pishem '0' za da inicializirame 'topFacultyNumber'
    int topFacultyNumber = 0;

    std::vector<int> oddFacultyNumbers;

    for (int i = 0; i < facultyNumbers.size(); ++i) {
        // pishem [i] pred 'facultyNumbers' zashtoto tursim chislo na mqsto 'i'
        if (facultyNumbers[i] % 2 != 0) {
            oddFacultyNumbers.push_back(facultyNumbers[i]);
        }

        if (facultyNumbers[i] > topFacultyNumber) {
            topFacultyNumber = facultyNumbers[i];
        }

    }

    if (oddFacultyNumbers.empty()) {
        std::cout << "No Odd Faculty Numbers Found";
        return;
    }

    std::cout << topFacultyNumber;
}

void sort() {
    std::vector<int> facultyNumbersSorted(facultyNumbers.size());
    int lastMinUsed = facultyNumbersSorted[0];

    for (int i = 0; i < facultyNumbers.size(); ++i) {

        int minNumber = INT_MAX;

        for (int j = 0; j < facultyNumbers.size(); ++j) {
            if (facultyNumbers[j] < minNumber && facultyNumbers[j] != lastMinUsed) {
                minNumber = facultyNumbers[j];
            }
        }

        facultyNumbersSorted[i] = minNumber;
        lastMinUsed = minNumber;
        std::cout << "a";
    }

    std::cout << "!";
}