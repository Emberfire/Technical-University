#include <iostream>
#include <cmath>

//Taken from page 23, exercise 10
//The program accepts width and height of a rectangle and calculates its area, perimeter and diagonal size
int main() {
    int rectangleWidth;
    int rectangleHeight;
    int area;
    int perimeter;
    double diagonal;

    std::cout << "Enter rectangle width: ";
    std::cin >> rectangleWidth;
    std::cout << "Enter rectangle height: ";
    std::cin >> rectangleHeight;

    area = rectangleWidth * rectangleHeight;
    perimeter = 2 * rectangleWidth + 2 * rectangleHeight;
    diagonal = sqrt(pow(rectangleWidth, 2) + pow(rectangleHeight, 2));

    std::cout << "Area: " << area << "\n";
    std::cout << "Perimeter: " << perimeter << "\n";
    std::cout << "Diagonal: " << diagonal << "\n";
}