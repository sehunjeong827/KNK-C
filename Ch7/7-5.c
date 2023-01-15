#include<stdio.h>
#include<ctype.h>
int main(){
        char ch;
        int sum=0;
        printf("Enter a word : ");
        scanf("%c",&ch);

        for(;ch != '\n';){
                ch = toupper(ch);

                if(ch=='A'||ch=='E'||ch=='I'||ch=='L'||ch=='N'||ch=='O'||ch=='R'||ch=='S'||ch=='T'||ch=='U') sum += 1;
                if(ch=='D'||ch=='G') sum += 2;
                if(ch=='B'||ch=='C'||ch=='M'||ch=='P') sum += 3;
                if(ch=='F'||ch=='H'||ch=='V'||ch=='W'||ch=='Y') sum += 4;
                if(ch=='K') sum += 5;
                if(ch=='J'||ch=='X') sum += 8;
                if(ch=='Q'||ch=='Z') sum += 10;

                ch = getchar();
        }
        printf("%d",sum);
        printf("\n");

        return 0;
}