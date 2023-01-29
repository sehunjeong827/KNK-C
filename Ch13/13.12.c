#include<stdio.h>
#include<string.h>
int main(){
        int i,k;
        char sen[30][20],ch;
        printf("Enter a sentence: ");
        for(i=0;;i++){
                scanf("%s",sen[i]);
                ch = sen[i][strlen(sen[i])-1];
                if(ch == '?' || ch == '!'){
                        sen[i][strlen(sen[i])-1] = '\0';
                        break;
                }
        }
        for(;i>=0;) printf("%s ",sen[i--]);
        printf("%c\n",ch);
        return 0;
}