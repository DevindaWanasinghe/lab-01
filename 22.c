#include <stdio.h>
int main(){
    const float pi = 3.1415;
    float  num, dia, cir, are;

    printf("Enter Radius: ");
    scanf("%f",&num);

    dia = 2*num;
    cir = 2*pi*num;
    are = pi*(num*num);

    printf("Diameter is: %.2f \nCircumference is: %.2f \nArea is: %.2f",dia,cir,are);

    return 0;
}