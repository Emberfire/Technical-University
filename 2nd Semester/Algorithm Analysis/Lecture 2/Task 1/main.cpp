#include <iostream>

void swap(int &a, int &b);

int main() {
    int a = 5;
    int b = 3;
    swap(a, b);
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << a << " ";
    std::cout << b;
}