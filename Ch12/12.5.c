#include<stdio.h>
int main(){
        char ch,sen[200];
        char *p = sen;
        int i;
        printf("Enter a sentence: ");
        scanf("%c",p);
        while(*p != '?'&& *p != '!'){
                *++p = getchar();
        }
        ch = *p;

        printf("Reversal of sentence: ");
        for(;p--;){
                if(*p == ' '){
                        for(i=1;;i++){
                                *++p;
                                if(*p==' '||*p=='?'||*p=='!') break;
                                printf("%c",*p);
                        }
                        printf(" ");
                        p-=i;
                }
                if(p == sen){
                        for(;;){
                                printf("%c",*p++);
                                if(*p==' '||*p=='?'||*p=='!') break;
                        }
                        break;
                }
        }
        printf("%c\n",ch);

        return 0;
}