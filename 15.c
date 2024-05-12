#include <stdio.h> 
int main(){ 
    int a , b; 
    a = 10; 
    printf( "Value of b is %d\n", (a == 1) ? 20: 30 ); 
    printf( "Value of b is %d\n", (a == 10) ? 20: 30 );

return 0;
}


//output
/*
Value of b is 30
Value of b is 20
*/