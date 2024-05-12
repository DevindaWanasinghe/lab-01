#include<stdio.h>
int main(){
    char ch;
    printf("Enter Any Letter: ");
    scanf("%c",&ch);  

    switch(ch){
        case 'a':
        printf(" %c is Vowel letter",ch);
        break;

        case 'e':
        printf("%c is Vowel letter",ch);
        break;

        case 'i':
        printf("%c is Vowel letter",ch);
        break;

        case 'o':
        printf("%c is Vowel letter",ch);
        break;

        case 'u':
        printf("%c is Vowel letter",ch);
        break;

        case 'A':
        printf("%c is Vowel letter",ch);
        break;

        case 'E':
        printf("%c is Vowel letter",ch);
        break;

        case 'I':
        printf("%c is Vowel letter",ch);
        break;

        case 'O':
        printf("%c is Vowel letter",ch);
        break;

        case 'U':
        printf("%c is Vowel letter");
        break;

        default:
        printf("%c is Concenant Letter");
        break;
    }
    return 0;

}

   