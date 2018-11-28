#include <iostream>

int sumNumbers();

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    std::cout << sumNumbers(a, b, c);
}

int sumNumbers(int a, int b, int c) {
    return a + b + c;
}