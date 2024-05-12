#include <stdio.h>
int main(){
    int num,num2,age,bill1,bill2,bill3,dis,tot;
    printf("\t\t--COFEE--\n");
    printf("\t1 = Small\t Rs: 100.00/=\n \t2 = Medium\t Rs: 150.00/=\n \t3 = Large\t Rs: 200.00/=");

    printf("\n\nEnter You Want Cofee Size No: ");
    scanf("%d",&num2);
    printf("\nEnter You Want Cofee Quantity: ");
    scanf("%d",&num);
   

    printf("Please Enter Your Age: ");
    scanf("%d",&age);
    bill1 = (100 * num);
    bill2 = (150 * num);
    bill3 = (200 * num);

    switch (num2){
        case 1:
        if(age <= 18){
            dis = 0.1 * bill1; 
            tot = bill1 - dis;
            printf("\n\nTotal price: Rs: %d/=",bill1);
            printf("\nDiscount: Rs: %d/=",dis);
            printf("\n\nYour Total Bill: Rs: %d/=",tot);
        }
        else{
            printf("\n\nYour Total Bill: Rs: %d/=",bill1); 
        }
        break;

        case 2:
        if(age <= 18){
            dis = 0.1 * bill2; 
            tot = bill2 - dis;
            printf("\n\nTotal price: Rs: %d/=",bill2);
            printf("\nDiscount: Rs: %d/=",dis);
            printf("\n\nYour Total Bill: Rs: %d/=",tot);
        }
        else{
            printf("\n\nYour Total Bill: Rs: %d/=",bill2); 
        }
        break;

        case 3:
        if(age <= 18){
            dis = 0.1 * bill3; 
            tot = bill3 - dis;
            printf("\n\nTotal price: Rs: %d/=",bill3);
            printf("\nDiscount: Rs: %d/=",dis);
            printf("\n\nYour Total Bill: Rs: %d/=",tot);
        }
        else{
            printf("\n\nYour Total Bill: Rs: %d/=",bill3); 
        }
        break;

        default:
        printf("\n\nInvalid Input");
        break;
    }
    return 0;

}