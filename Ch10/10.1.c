#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define STACK_SIZE 100
int contents[STACK_SIZE];
int top = 0;
void make_empty();
bool is_empty();
bool is_full();
void push(int i);
int pop();
int main(){
        char ch;
        int val;
        while(1){
                printf("Enter parentheses and/or braces: : ");
                make_empty();
                for(;;){
                        scanf("%c",&ch);
                        if(ch == '('||ch == '{') push((int)ch);
                        if(ch == ')'){
                                if(pop()=='(') continue;
                                else printf("Parentheses/braces are't nested properly\n");
                        }
                        if(ch == '}'){
                                if(pop() == '{') continue;
                                else printf("Parentheses/braces are't nested properly\n");
                        }
                        if(ch == '\n'){
                                                            if(is_empty()) printf("Parentheses/braces are nested properly\n");
                                else printf("Parentheses/braces are't nested properly\n");
                                return 0;
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
                printf("Stack overflow\n");
                exit(1);
        }
        else contents[top++] = i;
}
int pop(){
        if(is_empty()){
                printf("Stack underflow\n");
                exit(1);
        }
        else return contents[--top];
}
