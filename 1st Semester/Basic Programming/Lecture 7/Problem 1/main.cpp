#include <iostream>

void determineClass(double &income);

int main() {
    double income;
    std::cin >> income;

    determineClass(income);
}

void determineClass(double &income) {
    if (income < 800) {
        std::cout << "Poor";
    } else if (income >= 800 && income < 2000) {
        std::cout << "Middle-class";
    } else {
        std::cout << "Rich";
    }
}