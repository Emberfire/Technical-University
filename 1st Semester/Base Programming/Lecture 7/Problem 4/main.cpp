#include <iostream>
#include <cmath>

void getSquare(int &x);

int main() {
    int x;
    std::cin >> x;

    for (int i = 1; i <= x; i++) {
        getSquare(i);
    }
}

void getSquare(int &x) {
    std::cout << sqrt(x);
}