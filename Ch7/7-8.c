#include<stdio.h>
#include<ctype.h>
int main(){
        int a,b,t=0;
        char ch;

        printf("Enter your time: ");
        scanf("%d:%d",&a,&b);

        while((ch=getchar())==' ');

        if(toupper(ch)=='P'){
                ch= getchar();
                if(ch=='\n'||toupper(ch)=='M') t = 720;
        }
        printf("time: %d\n",t+=60*a+b);

        return 0;
}