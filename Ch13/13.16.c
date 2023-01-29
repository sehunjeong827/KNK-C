#include<stdio.h>
#include<string.h>
void reverse(char*message);
int main(){
        char sen[100];
        printf("Enter a message: ");
        gets(sen);
        reverse(sen);
        printf("Reversal is %s\n",sen);
        return 0;
}
void reverse(char*message){
        char*f_p = message,*l_p = message + strlen(message)-1,ch;
        for(;;){
                if(f_p >= l_p) break;
                else if(f_p != l_p){
                        ch = *f_p;
                        *f_p = *l_p;
                        *l_p = ch;
                        l_p--;
                        f_p++;
                }
        }
}