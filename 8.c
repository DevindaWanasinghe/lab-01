#include <stdio.h>
int main(){
    int a,b,c;
    char ch;

    printf("A :- a = 2\t b = 3\t c = (++a, a+b)\n");  //Display Valus
    printf("\nB :- a = 1 \t b = 2\t c = 3\n");

    printf("\nEnter You Want Get Value: "); //Input A or B
    scanf("%c",&ch);

    if(ch=='A'){  
        a = 2;
        b = 3;
        c = (++a, a+b);

        printf("\n %d %d %d",a++, ++b, c+=2);
        printf("\n %d %d %d", a++, b, c-=1);
        printf("\n %d %d %d", a/=2, b*=3, c%=2);
        printf("\n %d %d %d",a, b, ++c);
    }
    else if(ch=='B'){
        a = 1;
        b = 2;
        c = 3;

        printf(" %d %d %d", a++, ++b, c+=2);
        printf("\n %d %d %d", a++, b, c-=1);
        printf("\n %d %d %d", a/=2, b*=3, c%=2);
        printf("\n %d %d %d",a, b, ++c);
    }
    else{
        printf("Invalid Input!");
    }
    return 0 ;

}