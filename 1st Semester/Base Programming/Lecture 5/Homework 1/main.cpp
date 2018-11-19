#include <iostream>
#include <cmath>

int main() {
    int n, m;

    std::cout << "Enter n:";
    std::cin >> n;
    std::cout << "Enter m:";
    std::cin >> m;
    int count = 0;

    for (int i = 1; i <= n; ++i) {
        int result = static_cast<int>(pow(i, 3) + 7 * pow(i, 2) + pow(n, 2));
        if (result % m == 0) {
            count++;
        }
    }

    std::cout << count;
}