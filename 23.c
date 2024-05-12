#include <stdio.h>
int main(){
    int num, result;

    printf("Enter a Number: ");
    scanf("%d",&num);

    result = num % 2;
    if(result == 0){
        printf("%d is Even Number",num);
    }
    else{
        printf("%d is Odd Number",num);
    }
    return 0;
}