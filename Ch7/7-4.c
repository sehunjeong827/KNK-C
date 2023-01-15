#include<stdio.h>

int main(){
        char ch,i=0;
        printf("Enter phone number : ");
        scanf("%c",&ch);

        for(;ch != '\n';){
        if(ch=='A'||ch=='B'||ch=='C') ch='2';
        if(ch=='D'||ch=='E'||ch=='F') ch='3';
        if(ch=='G'||ch=='H'||ch=='I') ch='4';
        if(ch=='J'||ch=='K'||ch=='L') ch='5';
        if(ch=='M'||ch=='N'||ch=='O') ch='6';
        if(ch=='P'||ch=='R'||ch=='S') ch='7';
        if(ch=='T'||ch=='U'||ch=='V') ch='8';
        if(ch=='W'||ch=='X'||ch=='Y') ch='9';

        putchar(ch);
        ch = getchar();
        }
        printf("\n");
        return 0;
}