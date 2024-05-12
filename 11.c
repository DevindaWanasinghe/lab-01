#include <stdio.h>

int main(){
    float num1, num2, result;

    printf("Enter First Number: ");
    scanf("%f",&num1);

    printf("Enter Second Number: ");
    scanf("%f",&num2);

    result = (num1 * num2) / 3;

    printf("Answer is: %.3f",result);


    return 0;
    
}