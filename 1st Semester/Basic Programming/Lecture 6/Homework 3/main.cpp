#include <iostream>

int main() {
    int x;
    int y;
    std::cin >> x;
    std::cin >> y;
    int array [x][y];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; ++j) {
            std::cin >> array[i][j];
        }
    }

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            std::cout << array[i][j] + 1;
        }

        std::cout << "\n";
    }
}