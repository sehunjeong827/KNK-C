#include<stdio.h>
#include<ctype.h>
int main(){
        char a[100]={0},ch;
        int i=0,k;
        printf("Enter a message: ");
        do{
                ch = getchar();
                for(;;){
                        if((ch>=65&&ch<=90)||(ch>=97&&ch<=122)||(ch=='\n')){
                                ch = toupper(ch);
                                a[i] = ch;
                                break;
                        }
                        else ch = getchar();
                }
        }while(a[i++] != '\n');
        i -= 2;

        for(k=0;k<i;k++)
                if(a[k]!=a[i--]){
                        printf("Not a palindrome\n");
                        return 0;
                }
        printf("Palindrome\n");

        return 0;
}