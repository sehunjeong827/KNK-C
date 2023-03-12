#include<stdio.h>

struct date{
        int year;
        int month;
        int day;
}f_d,s_d;

void compare_dates(void);
int main(){
        printf("First data (mm/dd/yy) :");
        scanf("%d/%d/%d",&f_d.month,&f_d.day,&f_d.year);
        printf("Second data (mm/dd/yy) :");
        scanf("%d/%d/%d",&s_d.month,&s_d.day,&s_d.year);

        compare_dates();
        return 0;
}

void compare_dates(void){
        if(f_d.year>s_d.year) printf("%d/%d/%d is earlier than %d/%d/%d\n",s_d.month,s_d.day,s_d.year,f_d.month,f_d.day,f_d.year);
        else if(f_d.year<s_d.year) printf("%d/%d/%d is earlier than %d/%d/%d\n",f_d.month,f_d.day,f_d.year,s_d.month,s_d.day,s_d.year);
        else if (f_d.year==s_d.year) {
                if(f_d.month>s_d.month) printf("%d/%d/%d is earlier than %d/%d/%d#n",s_d.month,s_d.day,s_d.year,f_d.month,f_d.day,f_d.year);
                else if(f_d.month<s_d.month) printf("%d/%d/%d is earlier than %d/%d/%d\n",f_d.month,f_d.day,f_d.year,s_d.month,s_d.day,s_d.year);
                else if(f_d.month==s_d.month) {
                        if(f_d.day>s_d.day) printf("%d/%d/%d is earlier than %d/%d/%dwn",s_d.month,s_d.day,s_d.year,f_d.month,f_d.day,f_d.year);
                        else if(f_d.day<s_d.day) printf("%d/%d/%d is earlier than %d/%d/%d#n",f_d.month,f_d.day,f_d.year,s_d.month,s_d.day,s_d.year);
                        else if(f_d.day==s_d.day) {
                                printf("earlier is nothing#n");
                        }
                }
        }
}