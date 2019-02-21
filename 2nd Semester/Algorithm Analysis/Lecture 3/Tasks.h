#ifndef LECTURE_3_TASKS_H
#define LECTURE_3_TASKS_H

#endif

#include <cmath>

int fact(int n) {
    if (n == 1) {
        return 1;
    }

    return n * fact(n - 1);
}

void task1() {
    int n;
    std::cin >> n;
    std::cout << fact(n);
}

int powerOfN(int x, int n) {
    if (n == 1) {
        return 1;
    }

    return x * pow(x, n - 1);
}
void task2() {
    int x;
    int n;

    std::cin >> x;
    std::cin >> n;
    std::cout << powerOfN(x, n);
}

int biggestCommonDivisor(int m, int n) {
    if (n == 0) {
        return m;
    }

    if (n > m) {
        return biggestCommonDivisor(n, m);
    } else {
        return biggestCommonDivisor(n, m % n);
    }
}

void task3() {
    int m;
    int n;

    std::cin >> m;
    std::cin >> n;

    std::cout << biggestCommonDivisor(m, n);
}

void fibonacci(int n) {
    for (int i = 1; i <= n; i+= (i - 1)) {
        std::cout << i - 1;
    }
}

void task4() {
    int n;
    std::cin >> n;

    fibonacci(n);
}