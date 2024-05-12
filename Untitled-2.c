#include <stdio.h>

int main() {
    int unit, last = 0, last1 = 0, last2 = 0, last3 = 0, xy, bill;

    printf("Enter Electricity unit:");
    scanf("%d", &unit);

    if (unit < 50) {
        xy = unit - 50;
        last = xy * 4;
    } else if (unit < 150) {
        xy = unit - 50;
        last1 = xy * 8;
    } else if (unit < 250) {
        xy = unit - 150;
        last2 = xy * 12;
    } else if (unit >= 250) {
        xy = unit - 250;
        last3 = xy * 16;
    } else {
        printf("Invalid input");
        return 1; // Exiting the program due to invalid input
    }

    bill = last + last1 + last2 + last3;
    printf("Bill is: %d", bill);

    return 0;
}
