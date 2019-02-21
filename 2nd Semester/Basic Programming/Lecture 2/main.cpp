#include <iostream>
#include <cstring>

void swap(char array[], char arrayReversed[]);

int main() {
    char *array = new char[200];
    char *arrayReversed = new char[std::strlen(array)];
    std::cin >> array;
    swap(array, arrayReversed);
    std::cout << arrayReversed;
}

void swap(char array[], char arrayReversed[]) {
    for (int i = 0; i < std::strlen(array); i++) {
        arrayReversed[i] = array[std::strlen(array) - i - 1];
    }
}