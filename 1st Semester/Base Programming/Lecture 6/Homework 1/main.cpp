#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number for n: ";
    std::cin >> n;
    int array[n];

    for (int i = 0; i < n - 1; ++i) {
        int number;
        std::cout << "Enter a number to add: ";
        std::cin >> number;
        array[i] = number;
    }

    int x;
    std::cout << "Enter a number to find: ";
    std::cin >> x;
    bool hasX = false;

    for (int i = 0; i < array.length - 1; ++i) {
        if (array[i] == x) {
            hasX = true;
        }
    }

    return hasX;
}