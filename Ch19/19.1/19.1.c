#include<stdio.h>
#include<stdlib.h>
#include"stackADT.h"

int main(){
        char ch;
        Stack s;
        s = create();

        while(1){
                make_empty(s);
                printf("Enter parentheses and/or braces: : ");
                for(;;){
                        scanf("%c",&ch);
                        if(ch == '('||ch == '{') push(s,(int)ch);
                        if(ch == ')'){
                                if(pop(s)=='(') continue;
                                else{
                                        printf("Parentheses/braces are't nested properly\n");
                                        return 0;
                                }

                        }
                        if(ch == '}'){
                                if(pop(s) == '{') continue;
                                else{
                                        printf("Parentheses/braces are't nested properly\n");
                                        return 0;
                                }
                                
                        }
                        if(ch == '\n'){
                                if(is_empty(s)) printf("Parentheses/braces are nested properly\n");
                                else
                                        printf("Parentheses/braces are't nested properly\n");
                                        
                                return 0;
                        }
                }
        }
        return 0;
}