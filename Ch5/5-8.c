#include<stdio.h>
int main() {
    int x,y,value;
    printf("Enter a 24-hour time");
    scanf("%d %d",&x,&y);
    value = 60*x + y;
    if(value<480) printf("8:00 a.m., arriving 10:16 a.m. \n");
    else if(value<583) printf("9:43 a.m., arriving 11:52 a.m.\n");
    else if(value<679) printf("11:19 a.m. arriving 1:31 p.m. \n");
    else if(value<767) printf("12:47 a.m. arriving 3:00 p.m. \n");
    else if(value<840) printf("2:00p.m. arriving 4:08 p.m. \n");
    else if(value<945) printf("3:45 p.m., arriving 5:55 p.m. \n");
    else if(value<1140) printf("7:00 p.m., arriving 9:20 p.m. \n");
    else if(value<1305) printf("9:45 p.m., arriving 11:58 p.m.\n");
    else printf("Nothing#n");

    return 0;
    }