#include <stdio.h>
int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    if(num>0){
        printf("\n%d is Positive Number",num);
    }
    else if(num<0){
        printf("\n%d is Negitive Number",num);
    }
    else{
        printf("Zero");
    }
    return 0;

}