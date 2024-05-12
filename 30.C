#include <stdio.h>
int main(){
    char ch;
    printf("\ta, b, c, d, e\n");
    printf("\nEnter ONE of the Letters above: ");
    scanf("%c",&ch);

    switch(ch){
        case 'a':
        printf("\na UpperCase Letter --> A");
        break;

        case 'b':
        printf("\nb UpperCase Letter --> B");
        break;

        case 'c':
        printf("\nc UpperCase Letter --> C");
        break;

        case 'd':
        printf("\nd UpperCase Letter --> D");
        break;

        case 'e':
        printf("\ne UpperCase Letter --> E");
        break;

        default:
        printf("\nInvalid Input");
        break;
    }
    return 0;

}