#include<stdio.h>
int main(){
        int a,b,c,d;
        char ch;
        printf("Enter two fractions separated : ");
        scanf("%d/%d %c %d/%d",&a,&b,&ch,&c,&d);

        if(ch!='+'&&ch!='-'&&ch!='*'&&ch!='/'){
                printf("Again Enter two fractions separated : ");
                scanf("%d/%d %c %d/%d",&a,&b,&ch,&c,&d);
        }
        if(ch == '+') printf("%d/%d\n",a*d+b*c,b*d);
        if(ch == '-') printf("%d/%d\n",a*d-b*c,b*d);
        if(ch == '*') printf("%d/%d\n",a*c,b*d);
        if(ch == '/') printf("%d/%d\n",a/c,b/d);

        return 0;
}