#include<stdio.h>
#include<string.h>
#include<ctype.h>
double compute_average_word_length(const char *sentence);
int main(){
        char ch[100];
        printf("Enter a sentence: ");
        gets(ch);
        printf("%.2lf",compute_average_word_length(ch));
        return 0;
}
double compute_average_word_length(const char *sentence){
        char*space = sentence;
        double sum = 0.0;
        int i = 0;
        while(*space){
                if(*space++ == ' ') i++;
        }
                sum = strlen(sentence) - i;
        return sum/(i+1);
}