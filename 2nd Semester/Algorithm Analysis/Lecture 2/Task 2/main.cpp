#include <iostream>

void sort(int &a, int &b, int &c);

int main() {
    int a = 5;
    int b = 3;
    int c = 1;

    sort(a, b, c);
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void sort(int &a, int &b, int &c) {
    std::cout << a << b << c << "\n";
    if (a > b) {
        swap(a, b);
    }

    if (b > c) {
        swap(b, c);
    }

    if (a > b) {
        swap(a, b);
    }

    std::cout << a << b << c << "\n";
    std::cout << c;
}