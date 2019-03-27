#include <iostream>
#include <algorithm>
#include <functional>
#include <iomanip>

int countChange(double change, int coin, int coinCount[], int amountOfCoins);
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
    int coinCount[amountOfCoins];

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
        countChange(change, coins[i], coinCount, amountOfCoins);
    }

    std::cout << "\nMinimum coins used: " << coinsUsed;
    for (int i = 0; i < amountOfCoins; ++i) {
        std::cout << "\n" << coinCount[i] << "x" << coins[i];
    }
    std::cout << "\nThe Change is: " << change / 100;

}

int countChange(double change, int coin, int coinCount[], int amountOfCoins) {
    if (amountReached + coin > change || amountReached == change) {
        return 0;
    }

    amountReached += coin;
    coinsUsed++;
    coinCount[std::find(coinCount[0], coinCount[ - 1], coin)]++;
    return amountReached + countChange(change, coin, coinCount, amoun);
}