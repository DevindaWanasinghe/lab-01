#include <stdio.h>
int main(){
    int unit,last =0,last1 =0,last2 =0,last3 =0,xy, bill,num2;
    float dis,lastbill;
    printf("Enter Electricity unit:");
    scanf("%d",&unit);

    if(unit<50){
        last = unit * 4;
    }
    else if(unit < 150){
        num2 = 50 * 4;
        xy = unit - 50;
        last1 =  num2 + xy * 8;
    }
    else if(unit < 250){
        num2 = 100 * 8;
        xy = unit - 150;
        last2 = num2 + xy * 12;
    }
    else if(unit >= 250){
        num2 = 100 * 12;
        xy = unit - 250;
        last3 = num2 + xy * 16;
    }
    else{
        printf("invalid input");
    }
    bill = last + last1 + last2 + last3;
    dis = 0.2 * bill;
    lastbill = bill + dis;
    printf("\nYour (%d Unit) Electricity Total Bill is:- Rs:%.2f /= \nSurcharge is:- Rs:%.2f /= ",unit,lastbill,dis);

    return 0;
}

