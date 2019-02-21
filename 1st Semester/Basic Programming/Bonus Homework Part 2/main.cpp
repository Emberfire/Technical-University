#include <iostream>

//This program does the same as the first part of the bonus homework, but prints sheets divisible by a signature that is specified beforehand
double calculatePrintingPrice(int numberOfPages, int numberOfCopies, double pricePerSheet, double pricePerPlate, int signature) {
    int bindingPrice = 2;
    double tax = 0.175;
    int actualNumberOfSheetsPrinted = (numberOfPages + (numberOfPages % signature)) / 2;

    double copiesPrice = ((actualNumberOfSheetsPrinted * pricePerSheet + bindingPrice) * numberOfCopies) + pricePerPlate * numberOfPages;
    double totalPrice = copiesPrice + copiesPrice * tax;

    return totalPrice;
}

double calculateBlackWhitePrintingPrice(int numberOfPages, int numberOfCopies, int signature) {
    return calculatePrintingPrice(numberOfPages, numberOfCopies, 0.01, 7, signature);
}

double calculateColouredPrintingPrice(int numberOfPages, int numberOfCopies, int signature) {
    return calculatePrintingPrice(numberOfPages, numberOfCopies, 0.04, 28, signature);
}

int main() {
    std::cout << "Price of printing 1000 coloured books with 32 pages each: " << calculateColouredPrintingPrice(32, 1000, 16) << " pounds" << "\n";
    std::cout << "Price of printing 2000 black and white books with 40 pages each with 8 blank pages: " << calculateBlackWhitePrintingPrice(40, 2000, 16) << " pounds" << "\n";
    std::cout << "Price of printing 400 black and white books with 160 pages each: " << calculateBlackWhitePrintingPrice(160, 400, 16) << " pounds" << "\n";
    std::cout << "Price of printing 50 coloured books with 30 pages each with 2 blank pages: " << calculateBlackWhitePrintingPrice(30, 50, 16) << " pounds" << "\n";
    std::cout << "Price of printing 35 black and white books with 34 pages each with 14 blank pages: " << calculateBlackWhitePrintingPrice(34, 35, 16) << " pounds" << "\n";
    std::cout << "Price of printing 35 black and white books with 34 pages each with 6 blank pages: " << calculateBlackWhitePrintingPrice(34, 35, 8) << " pounds" << "\n";
    std::cout << "Price of printing 35 black and white books with 34 pages each with 2 blank pages: " << calculateBlackWhitePrintingPrice(34, 100, 6) << " pounds";
}