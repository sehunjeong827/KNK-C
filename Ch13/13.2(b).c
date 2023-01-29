#include<stdio.h>
#include<stdio.h>
#include<string.h>
#define MAX_REMIND 50
#define MSG_LEN 60
int read_line(char str[],int n);

int main(){
        char reminders[MAX_REMIND][MSG_LEN+3];
        char day_str[10],msg_str[MSG_LEN+1],time_m[5],time_h[5];
        int day,i,j,num_remind = 0,h,m;

        for(;;){
                if(num_remind==MAX_REMIND){
                        printf("--No space left--\n");
                        break;
                }
                printf("Enter day and reminder: ");
                scanf("%d",&day);
                if(day == 0) break;
                scanf(" %d:%d",&h,&m);
                sprintf(day_str,"%2d",day);
                sprintf(time_h,"%2d",h);
                sprintf(time_m,"%2d",m);
                strcat(day_str," ");
                strcat(day_str,time_h);
                strcat(day_str,":");
                strcat(day_str,time_m);

                read_line(msg_str,MSG_LEN);
                for(i=0;i<num_remind;i++)
                if(strcmp(day_str,reminders[i])<0) break;
                for(j=num_remind;j>i;j--) strcpy(reminders[j],reminders[j-1]);
                strcpy(reminders[i],day_str);
                strcat(reminders[i],msg_str);

                num_remind++;
        }
        printf("\nDay 24hour Reminder\n");
        for(i=0;i<num_remind;i++) printf("%s\n",reminders[i]);

        return 0;
}

int read_line(char str[],int n){
        int ch,i =0;
        while((ch = getchar()) != '\n')
                if(i<n) str[i++] = ch;
        str[i] = '\0';
        return i;
}
