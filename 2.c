#include <stdio.h>

int main(){
    int num1,num2,result;

    printf("Enter first Number:");
    scanf("%d",&num1);

    printf("Enter second Number: ");
    scanf("%d",&num2);

    result = num1 + num2;
    printf("\nAddition is %d",result);

    result = num1 - num2;
    printf("\nSubtraction is %d",result);

    result = num1 * num2;
    printf("\nMultiplication is %d",result);

    if(num2 != 0){
        result = num1 / num2;
        printf("\nDivision is %d",result);
    }else{
        printf("Can't Divide by zero\n");
    }
    
    return 0;


}