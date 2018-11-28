#include <iostream>
#include <vector>

void insertInArray(int number);

void printArray();

std::vector<int> numbers;

int gcd(std::vector<int> vector, int n);

int main() {
    int number;
    std::cout << "Enter a number, or enter '0' for end of input: ";
    std::cin >> number;

    while (number != 0) {
        insertInArray(number);
        std::cin >> number;
    }

    printArray();
    gcd(numbers, static_cast<int>(numbers.size()));
}

void insertInArray(int number) {
    numbers.push_back(number);
}

void printArray() {
    for (int number : numbers) {
        std::cout << number;
    }
}

int gcd(std::vector<int> vector, int n) {
    int result = vector[0];
    for (int i = 1; i < n; ++i) {
        result = gcd(vector[i], result);
    }

    return result;
}