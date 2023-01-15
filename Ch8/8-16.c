#include<stdio.h>
#include<ctype.h>
int main(){
        int i,alph_f[26]={0},alph_s[26]={0};
        char ch;
        printf("Enter first word: ");
        scanf("%c",&ch);
        for(i=0;ch != '\n';i++){
                if(isalpha(ch)!=0){
                        ch = tolower(ch);
                        alph_f[ch - 'a']++;
                        ch = getchar();
                }
                else continue;
        }
        printf("Enter second word: ");
        scanf("%c",&ch);
        for(i=0;ch != '\n';i++){
                if(isalpha(ch)!=0){//isalpha 는 대문자1 소문자2 나머지0 을 int형으로 반환해주는 ctype.h의 함수
                        ch = tolower(ch);
                        alph_s[ch - 'a']--;
                        ch = getchar();
                }
                else continue;
        }
        for(i=0;i<26;i++){
                if(alph_f[i]+alph_s[i] != 0){
                printf("The words are not anagrams.\n");
                                return 0;
                }
        }
        printf("The words are anagrams.\n");

        return 0;
}