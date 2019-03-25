#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int items[n];
    int itemsIndices[n];

    for (int i = 0; i < n; i++) {
        std::cin >> items[i];
        itemsIndices[i] = 0;
    }

    int totalSum;
    std::cin >> totalSum;
    int k = 0;
    int sumReached = 0;
    for (int j = 0; j < n; j++) {
        for (int i = j; i < n; i++) {
            if (sumReached + items[i] <= totalSum) {
                sumReached += items[i];
                k++;
                itemsIndices[i] = 1;
            } else {
                sumReached = 0;
                k = 0;
                for (int l = 0; l < n; l++) {
                    itemsIndices[l] = 0;
                }

                break;
            }
        }

        if (sumReached == totalSum) {
            break;
        }
    }

    for (int m = 0; m < n; m++) {
        if (itemsIndices[m] == 1) {
            std::cout << items[m];
        }
    }
    std::cout << k;
    std::cout << "\n" << sumReached;
}