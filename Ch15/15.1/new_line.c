#include<stdio.h>
#include<string.h>
#include "line.h"

#define MAX_LINE_LEN 60

char line[MAX_LINE_LEN + 1];
int line_len = 0;
int num_words = 0;

void clear_line(void){
        line[0] = '\0';
        line_len = 0;
        num_words = 0;
}

void add_word(const char *word){
        if(num_words > 0){
                line[line_len] = ' ';
                line[line_len + 1] = '\0';
                line_len++;
        }
        strcat(line, word);
        line_len += strlen(word);
        num_words++;
}

int space_remaining(void){
        return MAX_LINE_LEN - line_len;
        }

void write_line(void){
        int extra_spaces, spaces_to_insert,i,j,k = 0,num_spaces = 0,num_remain;

        extra_spaces = MAX_LINE_LEN - line_len;

        for(i=0;i<line_len;i++){
                if(line[i] == ' ') num_spaces++;
        }

        int space_ar[num_spaces];

        num_remain = extra_spaces % num_spaces;

        int cp_num_remain = num_remain;

        for(i = 0;i < num_spaces;i++)
                space_ar[i] = extra_spaces/num_spaces + 1;

        for(i = 0;num_remain-- > 0;i+=2){
                if(i > num_spaces - 1) i -= num_spaces;
                space_ar[i] += 1;
        }

        for(i=0;i<line_len;i++){
                if(line[i] != ' ')
                        putchar(line[i]);
                else{
                        for(j = space_ar[k++];j > 0;j--) putchar(' ');
                        num_words--;
                }
        }
        putchar('\n');
}

void flush_line(void){
        if(line_len > 0)
                puts(line);
}                      