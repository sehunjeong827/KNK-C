#include<stdio.h>
#include<ctype.h>
int compute_vowel_count(const char *sentence);
int main(){
        char ch[100];
        printf("Enter a sentence: ");
        gets(ch);
        printf("Your sentence contains %d vowels\n",compute_vowel_count(ch));
        return 0;
}
int compute_vowel_count(const char*sentence){
        char ch;
        int i = 0;
        for(;;sentence++){
                ch = toupper(*sentence);
                if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') i++;
                else if(ch == '\0') break;
        }
        return i;
}