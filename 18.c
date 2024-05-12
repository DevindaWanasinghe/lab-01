#include <stdio.h>
int main(){
    int num1,num2,num3;

    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3); //Input 3 Numbers

    int largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3); // Ternary Operators (Outer Ternary)(Inner Ternaries - First Inner/ Second Inner)

    printf ("Largest Number is: %d",largest); //print largesst number
    return 0;
}