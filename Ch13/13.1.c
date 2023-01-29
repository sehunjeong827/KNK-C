#include<stdio.h>
#include<string.h>
int main(){
        char word[20],smallest_word[20],largest_word[20];

                printf("Enter word:");
                scanf("%s",word);
                strcpy(smallest_word,word);
                strcpy(largest_word,word);
        while(1){
                printf("Enter word:");
                scanf("%s",word);
                if(strcmp(word,smallest_word)<0) strcpy(smallest_word,word);
                else if(strcmp(word,largest_word)>0) strcpy(largest_word,word);

                if(strlen(word)==4){
                        printf("Smallest word: %s\n",smallest_word);
                        printf("Largest word: %s\n",largest_word);
                        return 0;
                }
        }
        return 0;
}