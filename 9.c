#include <stdio.h>
#include <math.h>

int main(){

    char ch;
    double num1, num2, num3;

    printf("\t A = (Rate^2) * delta \n\t B = 2(salary + bonus ) \n\t C = 1/time + 3mass \n\t D = a-7 / t + 9v \n");
    printf("Enter English Letter You Want Solve: ");
    scanf(" %c",&ch);

    if(ch == 'A'){
        printf("\nEnter Rate Value: ");
        scanf("%lf",&num1);

        printf("Enter Delta Value: ");
        scanf("%lf",&num2);

        printf("A is: %.2lf", pow(num1,2)* num2);

    }
    else if (ch == 'B'){
        printf("\nEnter Salary: ");
        scanf("%lf",&num1);

        printf("Enter Bonus: ");
        scanf("%lf",&num2);

          printf("B is: %.2lf", 2*(num1 + num2));
    }
    else if(ch == 'C'){
        printf("\nEnter Time: ");
        scanf("%lf",&num1);

        printf("Enter Mass: ");
        scanf("%lf",&num2);

        printf("C is: %.2lf", 1/(num1 + 3*num2));
    }
    else if(ch == 'D'){
        printf("\nEnter a Value: ");
        scanf("%lf",&num1);

        printf("Enter t Value: ");
        scanf("%lf",&num2);

        printf("Enter v Value: ");
        scanf("%lf",&num3);

        printf("D is: %.2lf", (num1-7)/(num2 + 9*num3));
    }
    else {
        printf("\nInvalid Input");
    }
return 0;

}