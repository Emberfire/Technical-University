#include <iostream>

int main() {
    int m, n;

    std::cin >> m;
    std::cin >> n;

    do {
        int result = 1;
        for (int i = m; i <= n; ++i) {
            result *= i;
        }
    } while (m <= n);
}