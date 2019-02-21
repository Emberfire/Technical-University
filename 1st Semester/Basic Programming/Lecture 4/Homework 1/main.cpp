#include <iostream>

//Problem 1
//The program accepts a month number from the user and calculates which season is it based on the number provided
int main() {
    int month;
    std::string season;

    std::cout << "Enter month from 1 to 12: ";
    std::cin >> month;

    if (month >= 1 && month <= 3) {
        season = "Winter";
    } else if (month >= 4 && month <= 6) {
        season = "Spring";
    } else if (month >= 7 && month <= 9) {
        season = "Summer";
    } else if (month >= 10 && month <= 12) {
        season = "Fall";
    }

    std::cout << "\nThe season is: " << season;
}