#include<stdio.h>
#include<string.h>
#include "line.h"

#define MAX_LINE_LEN 60

struct node{
        struct node *next;
        char word[];
};

struct node *line = NULL;
int line_len = 0;
int num_words = 0;

void clear_line(void){
        struct node *temp;
        while(line != NULL){
                temp = line;
                line = line->next;
                free(temp);
        }
        line_len = 0;
        num_words = 0;
}

void add_word(const char *word){
        struct node *temp , **p = &line;
        if((temp = malloc(sizeof(struct node) + strlen(word) +1)) == NULL)
                      printf("malloc failed\n");

        strcpy(temp->word, word);
        temp->next = NULL;

        while(*p != NULL) p = &(*p)->next;

        *p = temp;

        line_len += strlen(temp->word) +1;
        num_words++;

}

int space_remaining(void){
        return MAX_LINE_LEN - line_len;
}

void write_line(void){
        int extra_spaces, spaces_to_insert,spaces_to_insert_rest,i,j;
        struct node *temp;

        extra_spaces = MAX_LINE_LEN - line_len;
        spaces_to_insert = (extra_spaces+1) / (num_words-1);
        spaces_to_insert_rest = (extra_spaces+1) % (num_words-1);


        for(temp =line; num_words > 0; temp =temp->next){

                if(num_words-- ==1){
                        printf("%s", temp->word);
                        break;
                }

                printf("%s", temp->word);
                printf(" ");
                for(j=0;j<spaces_to_insert;j++) printf(" ");
                if(spaces_to_insert_rest-- > 0) printf(" ");

        }
        printf("\n");
}

void flush_line(void){
        struct node* temp;
        for(temp=line; line_len > 0; temp = temp->next){
                printf("%s",temp->word);
                printf(" ");
        }
}