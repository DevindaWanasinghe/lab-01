#include <stdio.h>

int main(){

    int a,b,c,d,e,sum ;
    float avg;
    printf("Enter five Integer Numbers: ");
    scanf(" %d %d %d %d %d",&a,&b,&c,&d,&e); //Asign variables for valus

    sum = a + b + c + d + e ; //Calculation summation
    avg = sum/5;       //Calculation Average

    printf("\nSummation is %d",sum); //Display Summation

    printf("\nAverage is %.2f",avg);  //Display Average

    return 0;
}