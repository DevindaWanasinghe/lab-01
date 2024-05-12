#include <stdio.h>
int main(){
    int num1, num2,sum,sub,mul, temp, temp1;
    float div, mol,inc,dic;

    printf("Enter First Number ");
    scanf("%d",&num1);
    temp = num1;

    printf("Enter Second Number ");
    scanf("%d",&num2);
    temp1 = num2;

    printf("\n\nAddition is: %d",sum = num1+num2);
    printf("\nSubtraction is: %d",sub = num1-num2);
    printf("\nMultiplication is: %d",mul = num1*num2);
    printf("\nDivision is: %.2f",div = num1/num2);
    printf("\nModulus is: %.2f",mol = num1%num2);
    printf("\n%d After Increment is: %.2f",temp , inc = num1++);
    printf("\n%d Before Increment is: %.2f",temp , inc = ++num1);
    printf("\n%d After Decrement is: %.2f",temp1 , dic = num2--);  
    printf("\n%d Before Decrement is: %.2f",temp1 , dic = --num2);

    return 0;

}