#include <iostream>

//Problem 4
//This program accepts grades as input number and outputs them in string form
int main() {
    int grade;

    std::cout << "Enter grade: ";
    std::cin >> grade;

    switch (grade) {
        case 6:
            std::cout << "Excellent!";
            break;
        case 5:
            std::cout << "Very Good!";
            break;
        case 4:
            std::cout << "Good!";
            break;
        case 3:
            std::cout << "Average.";
            break;
        case 2:
            std::cout << "Failed.";
            break;
        default:
            std::cout << "Invalid grade.";
            break;
    }
}