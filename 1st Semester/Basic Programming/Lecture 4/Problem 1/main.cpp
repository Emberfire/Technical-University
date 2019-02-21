#include <iostream>

int main() {
    bool doorAOpened;
    bool doorBOpened;
    char answer;

    std::cout << "Is door A opened? (Y|y) or (N|n) : ";
    std::cin >> answer;

    doorAOpened = answer == 'Y' || answer == 'y';

    std::cout << "\nIs door B opened? (Y|y) or (N|n) : ";
    std::cin >> answer;

    doorBOpened = answer == 'Y' || answer == 'y';

    if (doorAOpened || doorBOpened) {
        std::cout << "\nThe mouse has escaped.";
    } else {
        std::cout << "\nThe mouse is trapped.";
    }
}