#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_REMIND 50
#define MSG_LEN 20
int compare_words(const void *w1, const void *w2);
int read_line(char str[], int n);

int main(){
        int read_value,j,i =0;
        char *reminders[MAX_REMIND], temp_reminders[MSG_LEN], *temp_address;
        char **rm = reminders;

        while(i < MAX_REMIND){
                printf("Enter word: ");

                read_value = read_line(temp_reminders,MSG_LEN);
                if(read_value == 0) break;

                if((reminders[i] = malloc(sizeof(char) * read_value)) == NULL){
                        printf("malloc error\n");
                        exit(1);
                }
                strcpy(reminders[i++], temp_reminders);
        }

        qsort(rm, i, sizeof(char**), compare_words);
        
        printf("In sorted order: ");
        for(j=0;j<i;j++){
                printf("%s ", *(rm + j));
        }
        printf("\n");

        return 0;
}

int read_line(char str[], int n){
        int ch, i=0;

        while((ch = getchar()) != '\n')
                if(i < n)
                        str[i++] = ch;
        str[i] = '\0';
        return i;
}

int compare_words(const void *w1, const void *w2){
        return strcmp(*(char **)w1, *(char **)w2);
}