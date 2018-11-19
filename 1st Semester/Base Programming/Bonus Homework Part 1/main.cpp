#include <iostream>

//This program calculates printing price of a printer. It takes the number of pages it will print per book, double-sided, how many books it will print, will they be coloured and calculates the cost
//of the total price including bindings, printing plates and tax
double calculatePrintingPrice(double numberOfPages, int numberOfCopies, double pricePerSheet, double pricePerPlate) {
    int bindingPrice = 2;
    double tax = 0.175;

    double copiesPrice = (((numberOfPages / 2) * pricePerSheet + bindingPrice) * numberOfCopies) + pricePerPlate * numberOfPages;
    double totalPrice = copiesPrice + copiesPrice * tax;

    return totalPrice;
}

double calculateBlackWhitePrintingPrice(int numberOfPages, int numberOfCopies) {
    return calculatePrintingPrice(numberOfPages, numberOfCopies, 0.01, 7);
}

double calculateColouredPrintingPrice(int numberOfPages, int numberOfCopies) {
    return calculatePrintingPrice(numberOfPages, numberOfCopies, 0.04, 28);
}

int main() {
    std::cout << "Price of printing 1000 coloured books with 32 pages each: " << calculateColouredPrintingPrice(32, 1000) << "\n";
    std::cout << "Price of printing 2000 black and white books with 40 pages each: " << calculateBlackWhitePrintingPrice(40, 2000) << "\n";
    std::cout << "Price of printing 400 black and white books with 160 pages each: " << calculateBlackWhitePrintingPrice(160, 400) << "\n";
}