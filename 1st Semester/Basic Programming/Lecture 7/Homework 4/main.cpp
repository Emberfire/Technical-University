#include <iostream>

void insertInArray(int n, int numbers[]);

void printArray(int n, int numbers[]);

int gcd(int a, int b);

int gcd(int numbers[], int n);

int main() {
    int n;
    std::cout << "Enter how many numbers will be inserted: ";
    std::cin >> n;
    int numbers[n];

    insertInArray(n, numbers);
    printArray(n, numbers);
    gcd(numbers, n);
}

void insertInArray(int n, int numbers[]) {
    for (int i = 0; i < n; ++i) {
        int number;
        std::cout << "Enter a number, or enter '0' for end of input: ";
        std::cin >> number;
        if (number != 0) {
            numbers[i] = number;
        }
    }}

void printArray(int n, int numbers[]) {
    for (int i = 0; i < n; ++i) {
        std::cout << numbers[i] << ' ';
    }

    std::cout << "\n";
}

int gcd(int a, int b)
{
    if (a == 0) {
        return b;
    }

    return gcd(b % a, a);
}

int gcd(int numbers[], int n) {
    int result = numbers[0];
    for (int i = 1; i < n; ++i) {
        result = gcd(numbers[i], result);
    }

    std::cout << result;
}