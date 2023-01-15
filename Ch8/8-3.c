#include<stdio.h>
int main(){
        int digit,i;
        long n;
        int a[10] = {0};
        printf("Eneter a number:");
        scanf("%ld",&n);

        if(n <= 0) return 0;

        printf("Digit:        ");
        for(i=0;i<10;i++){
                printf("%2d",i);
        }

        printf("\nOccurrence:   ");
        while(n>0){
                digit = n%10;
                a[digit]++;
                n /= 10;
        }

        for(i=0;i<10;i++){
                printf("%2d",a[i]);
        }
        printf("\n");

        return 0;
}