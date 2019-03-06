#include <iostream>

int main() {
    int n;
    int k;
    int counter = 0;
    std::cout << "Enter array length";
    std::cin >> n;
    int *array1 = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> *(array1 + i);
        if (*(array1 + i) > 0) {
            k++;
        }
    }

    int *array2 = new int[k];
    for (int i = 0; i < n; i++) {
        if (*(array1 + i) > 0) {
            *(array2 + counter) = *(array1 + i);
            counter++;
        }
    }

    for (int i = 0; i < k; i++) {
        std::cout << *(array2 + i);
    }
}