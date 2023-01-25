#include<stdio.h>
int main(){
        char a[100]={0};
        char *p = a;
        int i=0;
        printf("Enter a message: ");

        do{
                *p = getchar();
        }while(*p++ != '\n');
        p -= 2;

        printf("Reversal is: ");
        while(p >= a)
                printf("%c",*p--);
        printf("\n");

        return 0;
}