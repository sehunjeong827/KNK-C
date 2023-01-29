#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
bool is_palindrome(const char*message);
int main(){
        char sen[100];
        printf("Enter a message: ");
        gets(sen);
        if(is_palindrome(sen)) printf("Palindrome\n");
        else printf("Not a palindrome\n");
        return 0;
}
bool is_palindrome(const char*message){
        char*f_p = message,*l_p = message + strlen(message)-1;
        for(;;){
                if(isalpha(*l_p) == 0) l_p--;
                else if(isalpha(*f_p) == 0) f_p++;
                else if(f_p >= l_p) return true;
                else if(toupper(*f_p++) != toupper(*l_p--)){
                        return false;
                }
        }
}