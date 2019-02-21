#include <iostream>

void convertToYards(double &centimetres);

int main() {
    double centimetres;
    std::cin >> centimetres;

    convertToYards(centimetres);
}

void convertToYards(double &centimetres) {
    std::cout << centimetres / 91.44;
}