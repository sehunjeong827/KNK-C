#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"stack.h"
#define STACK_SIZE 100
int contents[STACK_SIZE];
int top = 0;
int main(){
        char ch;
        int val;
        while(1){
                printf("Enter an RPN expression: ");
                make_empty();
                for(;;){
                        scanf(" %c",&ch);
                        if(ch<48 || ch>57){
                                if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='=');
                                else return 0;
                        }
                        if(ch>=48 && ch<=57) push(ch-48);
                        if(ch=='+'){    
                                val = pop() + pop();
                                push(val);
                        }
                        if(ch=='-'){
                                val = pop();  // ex) input 9 4 - => -pop() + pop() => -5 ??
                                val = pop() - val;
                                printf("//%d//",val);
                                push(val);
                        }
                        if(ch=='*'){
                                val = pop() * pop();
                                push(val);
                        }
                        if(ch=='/'){
                                val = pop();
                                val = pop() / val;
                                push(val);
                        }
                        if(ch == '='){
                                printf("Value of expression: %d\n",pop());
                                break;
                        }
                }
        }
        return 0;
}

void make_empty(){
        top = 0;
}
bool is_empty(){
            return top == 0;
}
bool is_full(){
        return top == STACK_SIZE;
}
void push(int i){
        if(is_full()){
                printf("Expression is too complex!!\n");
                exit(1);
        }
        else contents[top++] = i;
}
int pop(){
        if(is_empty()){
                printf("Not enough operands in expression!!\n");
                exit(1);
        }
        else return contents[--top];
}