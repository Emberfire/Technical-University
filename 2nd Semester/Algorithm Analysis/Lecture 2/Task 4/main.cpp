#include <iostream>

int main() {
    int num;
    int position;

    std::cin >> num;
    std::cin >> position;

    int counter = 0;
    int n = num;
    while (n > 0) {
        n /= 10;
        counter++;
    }

    for (int i = position; i < counter; i++) {
        num /= 10;
    }

    num %= 10;
    std::cout << num;
}