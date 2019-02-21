#include <iostream>

int main() {
    int num;

    std::cin >> num;

    while (num >= 10) {
        num /= 10;
    }

    std::cout << num;
}