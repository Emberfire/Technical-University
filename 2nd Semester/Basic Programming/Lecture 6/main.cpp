#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int array[8];

    for (int &i : array) {
        i = rand() % 3;
    }

    char captcha[9];
    for (int j = 0; j < 8; j++) {
        if (array[j] == 0) {
            captcha[j] = (char)(rand() % 10 + 48);
        } else if (array[j] == 1) {
            captcha[j] = (char)(rand() % 26 + 65);
        } else if (array[j] == 2) {
            captcha[j] = (char)(rand() % 26 + 97);
        }
    }

    captcha[8]='\0';
    std::cout << captcha << "\n";
    std::string input;
    std::cout << "Enter the captcha you see: ";
    std::cin >> input;
    if (input == captcha) {
        std::cout << "Jackpot!";
    } else {
        std::cout << "Ripperino...";
    }
}