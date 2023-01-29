#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
bool are_anagrams(const char *word1,const char *word2);
int main(){
        char sen1[30],sen2[30];

        printf("Enter first word: ");
        scanf("%s",sen1);
        printf("Enter second word: ");
        scanf("%s",sen2);
        if(are_anagrams(sen1,sen2)) printf("The words are anagrams\n");
        else printf("The words are not anagrams\n");

        return 0;
}
bool are_anagrams(const char *word1,const char *word2){
        int i,k;
        char uni[80];
        int num_alpha[26]={0};
        char*word_uni = uni;
        strcpy(word_uni,word1);
        strcat(word_uni,word2);
        while(*word_uni){
                *word_uni = toupper(*word_uni);
                num_alpha[(*word_uni++) - 'A']++;
        }
        for(i=0;i<26;i++){
            if(num_alpha[i] %2 != 0) return false;
        }
        return true;
}
