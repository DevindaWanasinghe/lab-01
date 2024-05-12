#include <stdio.h>
int main(){
    int sec;

    printf("Enter Second:");
    scanf("%d",&sec);

    printf("\nHours:%d Minitues:%d Seconds:%d",sec/3600,(sec%3600)/60, sec%60);

    return 0;

}