#include<stdio.h>
#include<string.h>
void encrypt(char*message,int shift);
int main(){
        int sh;
        char sen[80];
        printf("Enter message to be encrypted: ");
        gets(sen);
        printf("Enter shift amount (1-25): ");
        scanf("%d",&sh);
        encrypt(sen,sh);
        printf("Encrypted message: ");
        printf("%s\n",sen);

        return 0;
}
void encrypt(char*message,int shift){
        for(;*message != '\0';){
                if(*message>=65 && *message<=90) *message = (*message - 'A' + shift)%26 + 'A';
                else if(*message>=97 && *message<=122) *message = (*message -'a'+ shift)%26 + 'a';
                message++;                                              }
}