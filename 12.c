#include <stdio.h>

int main(){

    int x = 1,y = 1,i = 0;
    float sum, avg;
    int arry[5];

    while (i < 5)
    {
        printf("\nEnter %d Student mark: ",x);
        scanf("%d",&arry[i]);
        sum += arry[i] ;
        i++;
        x++;
    }
    avg = sum / 5;

    printf("\nStudent Total Marks: %.2f",sum);
    printf("\nStudents Average Mark: %.2f",avg);

    for(i=0; i< 5; i++){
        printf("\n\nStudent %d Presantage is: %.1f\n",y, (arry[i]/avg )*100);
        y++;
    }
    return 0 ;



}