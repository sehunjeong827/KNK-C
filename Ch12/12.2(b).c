#include<stdio.h>
#include<ctype.h>
int main(){
        char a[100]={0},ch;
        char *p = a;
        int i=0,k;
        printf("Enter a message: ");
        do{
                ch = getchar();
                for(;;){
                        if((ch>=65&&ch<=90)||(ch>=97&&ch<=122)||(ch=='\n')){
                                ch = toupper(ch);
                                *p = ch;
                                break;
                        }
                        else ch = getchar();
                }
        }while(*p++ != '\n');
        p -= 2;
        for(k=0;a+k<p;k++)
                if(*(a+k) != *p--){
                        printf("Not a palindrome\n");
                        return 0;
                }
        printf("Palindrome\n");

        return 0;
}