#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare_words(const void *w1, const void *w2);

int main(){
        int i;
        char **st;
        char *s_ar[4];
        st = s_ar;

        s_ar[0] = malloc(10);
        s_ar[1] = malloc(10);
        s_ar[2] = malloc(10);
        s_ar[3] = malloc(10);

        strcpy(s_ar[0],"foo");
        strcpy(s_ar[1],"bar");
        strcpy(s_ar[2],"baz");
        strcpy(s_ar[3],"apple");

        qsort(st,4,sizeof(char**),compare_words);
        printf("$$$$$%s$$$$$\n",*st);
        printf("$$$$$%s$$$$$\n",*(st+1));
        printf("$$$$$%s$$$$$\n",*(st+2));
        printf("$$$$$%s$$$$$\n",*(st+3));

        return 0;
}

int compare_words(const void *w1, const void *w2)
{
        return strcmp(*(char **)w1, *(char **)w2);
        // change type for qosrt's needs
}