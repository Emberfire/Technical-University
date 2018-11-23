#include <iostream>

void determineNumberSign(int &x);

int main() {
    int x;
    std::cin >> x;

    determineNumberSign(x);
}

void determineNumberSign(int &x) {
    if (x > 0) {
        int sum = 0;
        for (int i = 1; i <= x; ++i) {
            sum += i;
        }

        std::cout << sum;
    } else {
        std::cout << x;
    }
}