#include <stdio.h>
int main (){
    float num,fahrenheit;

    printf("Enter Celsius Value: ");
    scanf("%f",&num);

    fahrenheit = (num* 9/5) + 32;

    printf("\n%.2f Celsius Value ---> Fahreheit: %.2f", num, fahrenheit);

    return 0;

}