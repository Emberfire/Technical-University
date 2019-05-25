#include <iostream>
#include <chrono>
#include <ctime>

void selectionSort(int array[], int &n);
void shellSort(int array[], int &n);

int main() {
    //2 1 4 8 6 0 7 3 9 5
    int n;
    std::cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }

    //Enter sorting function here:


    for (int i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
}

void selectionSort(int array[], int &n) {
    for (int i = 0; i < n; i++) {
        int lowestIndex = i;

        for (int j = i; j < n; j++) {
            if (array[j] <= array[lowestIndex]) {
                lowestIndex = j;
            }
        }

        int temp = array[i];
        array[i] = array[lowestIndex];
        array[lowestIndex] = temp;
    }
}

void shellSort(int array[], int &n) {
    for (int i = n / 2; i > 0; i /= 2) {
        for (int j = i; j < n; j++) {
            for (int k = j - i; k >= 0; k -= i) {

            }
            //if (array[j] < array[i + j]) {
            //    int temp = array[j];
            //    array[j] = array[counter + j];
            //    array[counter + j] = temp;
            //}
        }
    }
}