#include <stdio.h>
int main(){
    short shortinteger;
    long longinteger;
    int integer;
    long long verylonginteger;

    printf("Enter short Integer No:");
    scanf("%hd",&shortinteger); //%hd - Sort Integer

    printf("Enter long integer No: "); //%ld - long integer
    scanf("%ld",&longinteger);

    printf("Enter Integer No: "); //%d - integer
    scanf("%d", &integer);

    printf("Enter Very Long Integer: "); //%lld - long long
    scanf("%lld", &verylonginteger);

    printf("\nValue of Short value: %hd", shortinteger);
    printf("\nValue of long Value: %ld", longinteger);
    printf("\nValue of int value: %d", integer);
    printf("\nValue of long long value: %lld", verylonginteger);

    return 0;


}