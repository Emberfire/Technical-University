#include <iostream>

int main() {
    double sum = 0;
    double average = 0;
    int count = 0;

    int input;
    std::cin >> input;
    while (input != 0) {
        sum += input;
        count++;

        std::cin >> input;
    }

    average = sum / count;
    std::cout << average;
}