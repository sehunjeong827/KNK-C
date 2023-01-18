#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
void read_word(int []);
bool equal_array(int [],int []);
int main(){
        int i,counts1[26]={0},counts2[26]={0};
        read_word(counts1);
        read_word(counts2);
        i = equal_array(counts1,counts2);
        if(i==false) printf("The words are not anagrams.\n");
        else printf("The words are anagrams.\n");
        return 0;

}
void read_word(int counts[]){
        char ch;
        printf("Enter words: ");
        scanf("%c",&ch);
        for(int i=0;ch != '\n';i++){
                if(isalpha(ch)!=0){
                        ch = tolower(ch);
                        counts[ch - 'a']++;
                        ch = getchar();
                }
                else continue;
        }

}
bool equal_array(int counts1[],int counts2[]){
        for(int i=0;i<26;i++){
                if(counts1[i]-counts2[i] != 0){
                        return false;
                }
        }
        return true;
}