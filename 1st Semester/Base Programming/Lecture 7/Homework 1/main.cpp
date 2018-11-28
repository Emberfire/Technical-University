#include <iostream>

int sumNumbers(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    std::cout << sumNumbers(a, b, c);
}