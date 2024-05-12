#include <stdio.h>

int main(){
    float rupee, dlr;

    printf("\nEnter Rupees Value: ");
    scanf("%f",&rupee);

    dlr = rupee / 149;

    printf("\n%.2f ----> Dollar of: %.2f$",rupee, dlr);

    return 0;
}