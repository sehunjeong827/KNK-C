#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_REMIND 50
#define MSG_LEN 20

int read_line(char str[], int n);

int main(){
        int read_value,i =0,m,n,k,j;
        char *reminders[MAX_REMIND];
        char temp_reminders[MSG_LEN];
        char *temp_address;

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
        
        for(n=0;n<i-1;n++){
                           for(m=0;m<i-1;m++){
                                k = strcmp(reminders[m], reminders[m+1]);
                                if(k > 0){
                                        temp_address = reminders[m];
                                        reminders[m] = reminders[m+1];
                                        reminders[m+1] = temp_address;
                                }
                }
        }

        printf("In sorted order: ");
        for(j=0;j<i;j++){
                printf("%s ", reminders[j]);
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