#include<stdio.h>
int main() {
    int n,max, i, j;
    printf("Enter number of days: ");
    scanf("%d",&max);
    printf("Enter Starting day 1==Sun 7==Sat: ");
    scanf("%d",&n);
    
    for(j=1;j<n; j++) printf(" ");
    
    for(i=1;i<max+1; i++) {
        if((i+n-9) %7==0) printf("#n");
        printf("%2d", i);
    }

printf("#n");

return 0;
}