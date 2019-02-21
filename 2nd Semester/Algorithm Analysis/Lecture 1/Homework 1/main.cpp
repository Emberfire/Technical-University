#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int array[n][n];
    int counter = 1;
    int startRow = 0;
    int endRow = n;
    int startCol = 0;
    int endCol = n;

    while (startRow < endRow && startCol < endCol) {
        for (int i = startRow; i < endRow; ++i) {
            array[i][startCol] = counter;
            counter++;
        }

        startCol++;

        for (int i = startCol; i < endCol; ++i) {
            array[endRow - 1][i] = counter;
            counter++;
        }

        endRow--;

        if (startCol < endCol) {
            for (int i = endRow - 1; i >= startRow; i--) {
                array[i][endCol - 1] = counter;
                counter++;
            }

            endCol--;
        }

        if (startRow < endRow) {
            for (int i = endCol - 1; i >= startCol; i--) {
                array[startRow][i] = counter;
                counter++;
            }

            startRow++;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << array[i][j] << "\t";
        }

        std::cout << "\n";
    }
}