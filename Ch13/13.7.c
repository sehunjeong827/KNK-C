#include<stdio.h>
int main(){
        char*f_digit[] = {"twenty-","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
        char*s_digit[] = {"","one","two","three","four","five","six","seven","eight","nine"};
        char*teen_digit[] = {"ten","eleven","twelve","thirteen","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};

        int x,y;
        printf("Enter a two digit number: ");
        scanf("%1d%1d",&x,&y);
        if(x == 1) printf("%s\n",teen_digit[y]);
        else printf("%s%s\n",f_digit[x-2],s_digit[y]);
        return 0;
}