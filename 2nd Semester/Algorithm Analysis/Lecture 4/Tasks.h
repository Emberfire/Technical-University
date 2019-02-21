#include <iostream>

#ifndef LECTURE_4_TASKS_H
#define LECTURE_4_TASKS_H

#endif

int divideArray(int arr[], int l, int r) {
    if (l == r) {
        return arr[l];
    }

    int m = (l + r) / 2;
    int arrayFirstPart = divideArray(arr, l, m);
    int arraySecondPart = divideArray(arr, m + 1, r);
    if (arrayFirstPart > arraySecondPart) {
        return arrayFirstPart;
    } else {
        return arraySecondPart;
    }
}

void task1() {
    int n;
    std::cout << "Enter array length: \n";
    std::cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Enter a number to the array:\n";
        std::cin >> arr[i];
    }

    std::cout << divideArray(arr, 0, n - 1);
}

void task2() {
    int n;
    std::cout << "Enter length of array:\n";
    std::cin >> n;
    int arr[n];
    int max;

    for (int i = 0; i < n; i++) {
        std::cout << "Enter a number to the array:\n";
        std::cin >> arr[i];
    }

    max = arr[0];
    for (int j = 1; j < n; j++) {
        if (arr[j] >= max) {
            max = arr[j];
        }
    }

    std::cout << "Max: " << max;
}