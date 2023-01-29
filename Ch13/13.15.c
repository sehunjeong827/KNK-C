#include<stdio.h>
#include<stdlib.h>
int evaluate_RPN_expression(const char*expression);
int main(){
        char sen[40];
        printf("Enter an RPN expression: ");
        gets(sen);
        printf("Value of expression: %d\n",evaluate_RPN_expression(sen));
        return 0;
}
int evaluate_RPN_expression(const char*expression){
        int x[10],i=0;
        while(1){
        if(*expression == ' '){
                expression++;
                continue;
        }
        else if(*expression>='0' && *expression<='9') x[i] = atoi(expression);
        else if(*expression == '+'){
                x[i-2] = x[i-2] + x[i-1];
                i -= 2;
        }
        else if(*expression == '-'){
                x[i-2] = x[i-2] - x[i-1];
                i -= 2;
        }
        else if(*expression == '*'){
                x[i-2] = x[i-2] * x[i-1];
                               i -= 2;
        }
        else if(*expression == '/'){
                x[i-2] = x[i-2] / x[i-1];
                i -= 2;
        }
        else if(*expression == '=') return x[i-1];
        expression++;
        i++;
        }
}