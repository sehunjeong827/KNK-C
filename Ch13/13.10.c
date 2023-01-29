#include<stdio.h>
#include<string.h>
#include<ctype.h>
void reverse_name(char *name);
int main(){
        char ch[100];
        printf("Enter a first and last name: ");
        gets(ch);
        reverse_name(ch);
        return 0;
}
void reverse_name(char*name){
        char last[20],ch = *name;
        int i = 0;
        while(*name++ != ' ');
        strcpy(last,name);
        printf("%s, %c.\n",last,ch);
}