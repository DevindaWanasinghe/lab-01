#include<stdio.h>
int main()
{
    char subj[5][12]={"Physics","Chemistry","Biology","Mathematics","Computer"};
    int marks[]={0,1,2,3,4};
    int count,marks2,i=0,tot;
    for(count = 0 ; count<5 ; count++){
        printf("Enter %s marks :",subj[count]);
        scanf("%d",&marks2);
        marks[i]=marks2;
        i+=1;
        tot=marks2+tot;
    }
    //printf("%d\n",tot);
    //printf("%d",marks[0]);
    if(marks[0]/tot*100 >= 90){
        printf("Grade A");
            }
    else if(marks[1]/tot*100 >= 80){
        printf("Grade B");
            }
    else if(marks[2]/tot*100 >= 70){
        printf("Grade C");
            }
    else if(marks[3]/tot*100 >= 60){
        printf("Grade D");
            }
    else if(marks[4]/tot*100 >= 40){
        printf("Grade E");
            }
    else if(marks[5]/tot*100 <  0){
        printf("Grade F");
    }

    return 0;
}