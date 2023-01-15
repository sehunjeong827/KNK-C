#include<stdio.h>
#include<ctype.h>
int main(){
        int a,b,i=0;
        char ch;

        printf("Enter a sentence: ");
        scanf("%c",&ch);

        do{
                ch = toupper(ch);
                if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') i++;
                ch = getchar();

        }while(ch != '\n');

        printf("Your sentence contains %d vowels\n",i);

        return 0;
}