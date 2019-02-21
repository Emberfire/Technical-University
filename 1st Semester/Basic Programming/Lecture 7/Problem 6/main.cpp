#include <iostream>

int generateRandom();

int main() {
    int x;

    int random = generateRandom();

    for (int i = 6; i > 0; i--) {
        int guess;
        std::cin >> guess;
        if (guess == random) {
            std::cout << "That's right!";
            break;
        }

        std::cout << "Wrong, " << i << " answers left";
    }
}

int generateRandom() {
    return rand();
}