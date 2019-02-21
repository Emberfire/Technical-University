#include <iostream>

int gcd(int x, int y);

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << gcd(a, b) << "\n";
    std::cout << gcd(c, d) << "\n";
    std::cout << gcd(gcd(gcd(a, b), c), d);
}

int gcd(int x, int y) {
    return y == 0 ? x : gcd(y, x % y);
}