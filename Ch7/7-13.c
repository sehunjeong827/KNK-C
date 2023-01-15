#include<stdio.h>
int main(){
        int j=0,i=0;
        char ch;

        printf("Enter a sentence: ");
        scanf("%c",&ch);

        do{
                j++;
                if(ch == ' ') i++;
                ch =getchar();

        }while(ch != '\n');

        printf("Average word length: %.2f\n",(float)(j-i)/(i+1));

        return 0;
}