#include<stdio.h>
int main(){
        char*month[] = {"January","February","March","April","June","May","August","September","October","November","December"};
        int m,d,y;
        printf("Enter a date (mm/dd/yyyy): ");
        scanf("%d/%d/%d",&m,&d,&y);
        printf("You entered the date %s %d, %d\n",month[m-1],d,y);
        return 0;
}