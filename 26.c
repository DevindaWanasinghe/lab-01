#include <stdio.h>
int main(){
    int count;
    float maxmark, total,presantage,submark;
    int mark[100];

    char subject[5][12]={"Physics","Chemistry","Biology","Mathematics","Computer"};

    for(count = 0; count<5; count++){
        printf("Enter %s Mark: ",subject[count]);
        scanf("%f",&submark);
        mark[count]= submark;
        total+= submark;
    }
    
    presantage = (total/ 500) * 100;

    if(presantage>=90){
        printf("Grade: A\n");
    }
    else if(presantage>=80){
        printf("Grade: B\n");
    }
    else if(presantage>=70){
        printf("Grade: C\n");
    }
    else if(presantage>=60){
        printf("Grade: D\n");
    }
    else if(presantage>=40){
        printf("Grade: E\n");
    }
    else if(presantage<40){
        printf("Grade: F\n");
    }
    else{
        printf("Invalid Input\n");
    }

    return 0;
}
