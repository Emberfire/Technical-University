#include <iostream>

int passByValue(int apples);

int passByPointer(int *apples);

int passByReference(int &apples);

int main() {
    int apples;
    int pears;

    std::cout << "Enter apples:";
    std::cin >> apples;
    std::cout << "Enter pears:";
    std::cin >> pears;

    int &applesR = apples;
    int &pearsR = pears;

    std::cout << passByValue(apples) << "\n";
    std::cout << passByPointer(&apples) << "\n";
    std::cout << passByReference(applesR);

}

int passByValue(int apples) {

}

int passByPointer(int *apples) {

}

int passByReference(int &apples) {

}