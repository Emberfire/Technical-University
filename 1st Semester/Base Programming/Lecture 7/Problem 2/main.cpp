#include <iostream>
#include <cmath>

void findMin(int &a, int &b);

int main() {
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;

    findMin(a, b);
}

void findMin(int &a, int &b) {
    std::cout << __min(a, b);
}