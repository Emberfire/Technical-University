#include <iostream>
#include <conio.h>

int main() {
    long int timeInSeconds;
    int hours, minutes, seconds;
    printf("\n Enter time in seconds <=86400:");
    scanf("%ld", &timeInSeconds);
    hours = timeInSeconds / 3600;
    minutes = timeInSeconds / 60 % 60;
    seconds = timeInSeconds % 60;
    printf("\n The clock is %d:%d:%d", hours, minutes, seconds);
    printf("\n Press a key...");
    getch();
}