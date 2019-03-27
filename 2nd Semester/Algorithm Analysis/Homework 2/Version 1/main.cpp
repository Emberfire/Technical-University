#include <iostream>
#include <algorithm>
#include <functional>
#include <iomanip>

void countChange(double change, int coins[], int amountOfCoins);

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

    countChange(change, coins, amountOfCoins);
}

void countChange(double change, int coins[], int amountOfCoins) {
    int coinsUsed = 0;
    int amountReached = 0;
    for (int i = 0; i < amountOfCoins; ++i) {
        bool willMatch = false;
        while (amountReached <= change) {
            if (amountReached + coins[i] > change) {
                break;
            } else if (amountReached + coins[i] == change) {
                amountReached += coins[i];
                coinsUsed++;
                willMatch = true;
                break;
            } else {
                amountReached += coins[i];
                coinsUsed++;
            }
        }

        if (willMatch) {
            break;
        }
    }

    std::cout << "\nMinimum coins used: " << coinsUsed;
    std::cout << "\nThe Change is: " << change / 100;
}