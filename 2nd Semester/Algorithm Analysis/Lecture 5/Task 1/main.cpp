#include <iostream>

int main() {
    int n;
    std::cout << "Enter length of array:";
    std::cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Enter a number for position " << i << ": ";
        std::cin >> arr[i];
    }

    int counter = 0;

    for (int i = 1; i < n - 1; i++) {
        if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i]) {
            counter++;
        }
    }

    std::cout << counter;
}