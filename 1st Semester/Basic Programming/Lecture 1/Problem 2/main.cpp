#include <iostream>
#include <cmath>
#include <conio.h>

int main() {
    double b, h, p, s;
    printf("\n b:");
    scanf("%f", &b);
    printf("\n h:");
    scanf("%lf", &h);
    p = b + 2 * (sqrt(pow(b / 2, 2) + pow(h, 2)));
    s = b * h / 2;
    printf("\n B = %.2fcm, H = %.2fcm", b, h);
    printf("\n P = %.2fcm", p);
    printf("\n S = %.2fcm", s);
    printf("\n Press a key...");
    getch();
}