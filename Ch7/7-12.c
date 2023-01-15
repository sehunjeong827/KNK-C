#include<stdio.h>
int main(){
        float a,b,result=0;
        char ch;

        printf("Enter an expression: ");
        scanf("%f",&a);
        result = a;
        while((ch=getchar())!='\n'){
        scanf("%f",&b);

        if(ch == '+') result += b;
        if(ch == '-') result -= b;
        if(ch == '*') result *= b;
        if(ch == '/') result /= b;

        }

        printf("Value of expression: %f\n",result);
        return 0;
}