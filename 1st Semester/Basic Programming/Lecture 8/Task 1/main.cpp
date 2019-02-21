#include <iostream>
#include <cmath>
int i = 0;

int calculatePolinom(int n, int x);
int main() {
    int n;
    std::cin >> n;

    std::cout << calculatePolinom(2, n);
}

int calculatePolinom(int n, int x) {
    int result = i + 1 * pow(x, n);
    if (i <= n) {
        i++;
        calculatePolinom(i, x);
    }


    return result;
}