#include <stdio.h>
int main(){
    float length,result;

    printf("Enter Length in cm: ");
    scanf(" %f",&length);

    result = length / 100;

    printf("\n\n%.2f cm --> %.2f m \n%.2f cm --> %.3f km",length, result, length, result/1000);

    return 0;
}
