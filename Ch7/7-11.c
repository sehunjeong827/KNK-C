#include<stdio.h>
int main(){
        int a,b,i=0;
        char ch_f,ch_s;

        printf("Enter a first and last name: ");
        scanf("%c",&ch_s);
        ch_f = ch_s; //처음이름 저장

        while(getchar() != ' ');

        while((ch_s=getchar()) != '\n'){
                putchar(ch_s);
        }
        printf(", %c.\n",ch_f);

        return 0;
}