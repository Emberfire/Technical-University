#include <iostream>

//The program does the same task the first one does, but with a Switch case
int main() {
    int month;
    std::string season;

    std::cout << "Enter month from 1 to 12: ";
    std::cin >> month;

    switch (month) {
        case 1:
        case 2:
        case 3:
            season = "Winter";
            break;

        case 4:
        case 5:
        case 6:
            season = "Spring";
            break;

        case 7:
        case 8:
        case 9:
            season = "Summer";
            break;

        case 10:
        case 11:
        case 12:
            season = "Fall";
            break;
    }

    std::cout << "\nThe season is: " << season;
}