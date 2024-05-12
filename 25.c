#include <stdio.h>
int main(){
    int num,result,result1;
    printf("Enter Number Check for Divode Can 5 or 11 : ");
    scanf("%d",&num);

    result = num%5;
    result1 = num%11;

    if(result==0 && result1==0){
        printf("Can Devide");
    }
    else{
        printf("Can't Devide");
    }
    return 0;
}