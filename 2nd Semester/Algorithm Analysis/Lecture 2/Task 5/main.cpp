#include <iostream>

int main() {
    int num;
    std::cin >> num;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            std::cout << "Yes";
            return 0;
        }
    }

    std::cout << "No";
}