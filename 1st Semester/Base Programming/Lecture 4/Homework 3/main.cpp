#include <iostream>

//Problem 3
//This program takes an hour as input from the user and greets him according to the time entered.
int main() {
    int hour;

    std::cout << "Enter hour: ";
    std::cin >> hour;

    if (hour == 0) {
        hour = 24;
    }

    if (hour >= 5  && hour < 9) {
        std::cout << "Good Morning!";
    } else if (hour >= 9  && hour < 18) {
        std::cout << "Good Afternoon!";
    } else if (hour >= 18  && hour < 22) {
        std::cout << "Good Evening!";
    } else if ((hour >= 22  && hour <= 24) || (hour >= 1 && hour < 5)) {
        std::cout << "Good night!";
    }
}