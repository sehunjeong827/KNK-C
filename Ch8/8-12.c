#include<stdio.h>
#include<ctype.h>
int main(){
        int alph[26]={0},i,sum=0;
        char ch;
        printf("Enter a word: ");
        scanf("%c",&ch);

        for(;ch != '\n';){
                ch = toupper(ch);
                alph[ch-'A']++;
                ch = getchar();
        }
        for(i=0;i<26;i++){
        ch = i+'A';
        if(ch=='D'||ch=='G') alph[i]*=2;
        else if(ch=='B'||ch=='C'||ch=='M'||ch=='P') alph[i]*=3;
        else if(ch=='F'||ch=='H'||ch=='V'||ch=='W'||ch=='Y') alph[i]*=4;
        else if(ch=='K') alph[i]*=5;
        else if(ch=='J'||ch=='X') alph[i]*=8;
        else if(ch=='Q'||ch=='Z') alph[i]*=10;
        sum += alph[i];
        }

        printf("Sum = %d\n",sum);

        return 0;
}