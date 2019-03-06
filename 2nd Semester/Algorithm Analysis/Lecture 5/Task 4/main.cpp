#include <iostream>

int main() {
    int n;
    std::cout << "Enter matrix size: ";
    std::cin >> n;
    int counter = 1;

    int **array = new int*[n];
    for (int i = 0; i < n; i++) {
        *(array + i) = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(array + j)(array + i) = counter;
        }
    }
}