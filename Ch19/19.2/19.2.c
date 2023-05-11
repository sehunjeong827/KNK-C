#include<stdio.h>
#include<stdlib.h>
#include"stackADT.h"

int main(){
        Stack s = create();

        char ch;
        int val;
        while(1){
                printf("Enter an RPN expression: ");
                make_empty(s);
                for(;;){
                        scanf(" %c",&ch);
                        if(ch<48 || ch>57){
                                if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='=');
                                else return 0;
                        }
                        if(ch>=48 && ch<=57) push(s,ch-48);
                        if(ch=='+'){    
                                val = pop(s) + pop(s);
                                push(s,val);
                        }
                        if(ch=='-'){
                                val = pop(s);  // ex) input 9 4 - => -pop() + pop() => -5 ??
                                val = pop(s) - val;
                                printf("//%d//",val);
                                push(s,val);
                        }
                        if(ch=='*'){
                                val = pop(s) * pop(s);
                                push(s,val);
                        }
                        if(ch=='/'){
                                val = pop(s);
                                val = pop(s) / val;
                                push(s,val);
                        }
                        if(ch == '='){
                                printf("Value of expression: %d\n",pop(s));
                                break;
                        }
                }
        }
        return 0;

}