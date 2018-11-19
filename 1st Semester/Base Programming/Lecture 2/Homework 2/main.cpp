#include <iostream>
#include <cmath>

//Taken from page 23, exercise 11
//The program has a hard-coded random triangle with 8, 9 and 10 as side lengths. In the end, the program outputs its area
int main() {
    int a = 8;
    int b = 9;
    int c = 10;
    int semiPerimeter = (a + b + c) / 2;

    double area = sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));

    std::cout << area;
}