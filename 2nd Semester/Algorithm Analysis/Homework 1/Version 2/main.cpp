#include <iostream>
#include <algorithm>
#include <functional>
#include <iomanip>

double countChange(double change, int typeOfCoin, int amountReached);
int amountReached = 0;
int coinsUsed = 0;

int main() {
    int amountOfCoins;
    double change;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "Enter how many types of coins you want to enter: ";
    std::cin >> amountOfCoins;

    int coins[amountOfCoins];

    for (int i = 0; i < amountOfCoins; ++i) {
        std::cout << "\nEnter a coin amount (10 for 10 cents, 100 for 100 cents etc): ";
        std::cin >> coins[i];
    }

    std::cout << "\nEnter the change you want:";
    double changeUnprocessed;
    std::cin >> changeUnprocessed;
    change = changeUnprocessed * 100;
    std::sort(coins, coins + amountOfCoins, std::greater<int>());
    
    for (int i = 0; i < amountOfCoins; ++i) {
        if (amountReached == change) {
            break;
        }
        
        countChange(change, coins[i], amountReached);
    }

    std::cout << amountReached;
    std::cout << "\nMinimum coins used: " << coinsUsed;
    std::cout << "\nThe Change is: " << change / 100;
}

double countChange(double change, int typeOfCoin) {
    if (amountReached + typeOfCoin > change) {
        return 0;
    } else if (amountReached + typeOfCoin == change) {
        return typeOfCoin;
    }

    coinsUsed