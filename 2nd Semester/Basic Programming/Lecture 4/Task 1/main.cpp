#include <iostream>

int passByValue(int apples, int pears);

int passByPointer(int *apples, int *pears);

int passByReference(int &apples, int &pears);

int main() {
    int apples;
    int pears;

    std::cout << "Enter apples:";
    std::cin >> apples;
    std::cout << "Enter pears:";
    std::cin >> pears;

    int &applesR = apples;
    int &pearsR = pears;

    std::cout << passByValue(apples, pears) << "\n";
    std::cout << passByPointer(&apples, &pears) << "\n";
    std::cout << passByReference(applesR, pearsR);
}

int passByValue(int apples, int pears) {
    apples += 2;
    pears += 2;
    return apples + pears;
}

int passByPointer(int *apples, int *pears) {
    *apples += 2;
    *pears += 2;
    return *apples + *pears;
}

int passByReference(int &apples, int &pears) {
    apples += 2;
    pears += 2;
    return apples + pears;
}