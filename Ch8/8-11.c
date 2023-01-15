#include<stdio.h>
int main(){
        int a,b,i=0;
        char ph_num[15],ch;
        printf("Enter phone number: ");
        scanf("%c",&ch);
        printf("\nIn numeric form: ");
        while(ch != '\n'){
                if(ch=='A'||ch=='B'||ch=='C') ph_num[i]='2';
                else if(ch=='D'||ch=='E'||ch=='F') ph_num[i]='3';
                else if(ch=='G'||ch=='H'||ch=='I') ph_num[i]='4';
                else if(ch=='J'||ch=='K'||ch=='L') ph_num[i]='5';
                else if(ch=='M'||ch=='N'||ch=='O') ph_num[i]='6';
                else if(ch=='P'||ch=='R'||ch=='S') ph_num[i]='7';
                else if(ch=='T'||ch=='U'||ch=='V') ph_num[i]='8';
                else if(ch=='W'||ch=='X'||ch=='Y') ph_num[i]='9';
                else ph_num[i] = ch;
                ch = getchar();
                i++;
                if(i>15){
                        printf("No more than 15\n");
                        return 0;
                }
                printf("%c",ph_num[i-1]);
        }
        printf("\n");
        return 0;
}