#include <stdio.h>
int main (){
    //Varables 
    int num1,choose;
    float num3;
    double num4;
    char ch;

    // List of data types
    printf("\tList of All Data Type in C Lnguage\n"); 
    printf("\t\t 1 = Integer\n");
    printf("\t\t 2 = Float\n");
    printf("\t\t 3 = Char\n");
    printf("\t\t 4 = Double\n");

    printf("\nEnter sole you data type: "); //Enter input slove you data type
    scanf("%d",&choose);


    if(choose == 1){  //Integer
        printf("Enter Number:");
        scanf(" %d",&num1);
        printf("\nInteger Value is: %d",num1);
    }
    else if(choose==2){  //Float
        printf("Enter Number:");
        scanf(" %f",&num3);
        printf("\nFloat Value is: %f",num3);
    }
    else if(choose==3){  //Char
        printf("Enter Character:");
        scanf(" %c",&ch);
        printf("\nCharacter is: %c",ch);
    }
    else if(choose==4){   //Double
        printf("Enter Number:");
        scanf(" %lf",&num4);
        printf("\nDouble Value is: %lf",num4);
    }
    else{
        printf("Invalid Input");
    }
    return 0; 
}