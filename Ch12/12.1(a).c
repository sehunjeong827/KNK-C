#include<stdio.h>
int main(){
        char a[100]={0};
        int i=0;
        printf("Enter a message: ");

        do{
                a[i] = getchar();
        }while(a[i++] != '\n');

        printf("Reversal is: ");
        for(i-=2;i>=0;i--)
                printf("%c",a[i]);
        printf("\n");

        return 0;
}