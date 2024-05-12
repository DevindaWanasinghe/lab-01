#include <stdio.h>
int main(){
    float num,num1,add,sub,mul,div;
    int mol,cal;

    printf("\t--Calculator--\n");
    printf("\nEnter First Number: ");
    scanf("%f",&num);
    printf("Enter Second Number: ");
    scanf("%f",&num1);
    printf("\n\t1 = Addition \n\t2 = Subtraction \n\t3 = Multiplication \n\t4 = Division \n\t5 = Modulas \n");
    printf("\n\nEnter Number For Calculate: ");
    scanf("%d",&cal);

    switch (cal){
        case 1:
        printf("Addition: %.2f",add = num + num1);
        break;

        case 2:
        printf("Subtraction: %.2f",sub = num - num1);
        break;

        case 3:
        printf("Multiplication: %.2f",mul = num * num1);
        break;

        case 4:
        if(num1 != 0){
            printf("Division: %.2f",div = num / num1);
        }
        else{
            printf("Can't Divide By Zero\n");
        }
        break;

        case 5:
        printf("Modulas: %d",mol = (int)num % (int)num1);
        break;

        default:
        printf("Invalid Input\n");
        break;

    }
    return 0;    

}