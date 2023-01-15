#include<stdio.h>
int main(){
        int digit;
        long n;
        int a[10] = {0};
        printf("Eneter a number: ");
        scanf("%ld",&n);
        printf("Repeated digit(s): ");

        while(n>0){
                digit = n%10;
                a[digit]++;
                n /= 10;
                if(a[digit] == 2) printf("%d ",digit);
        }
        printf("\n");

        return 0;
}