#include <stdio.h>

int main(){
    int a,b,c,d;
    float e,f;

    a = 5 + (3*2);
    b = (5+3)*2;
    c = 7 + 3 - 2;
    d = 7 + (3-2);
    e = 17 + 3 *2/2;
    f = 17+3*(2/2);

    printf("\nA Answer is: %d",a);
    printf("\nB Answer is: %d",b);
    printf("\nC Answer is: %d",c);
    printf("\nD Answer is: %d",d);
    printf("\nE Answer is: %.2f",e);
    printf("\nF Answer is: %.2f",b);

    return 0;

}
