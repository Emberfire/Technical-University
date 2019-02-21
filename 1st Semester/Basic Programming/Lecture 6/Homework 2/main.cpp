#include <iostream>

int main() {
    int n;
    std::cout << "Enter matrix size: ";
    std::cin >> n;

    int matrix[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {

            std::cout << matrix[i][j] << " ";
        }

        std::cout << "\n";
    }
}