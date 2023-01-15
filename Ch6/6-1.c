#include<stdio.h>
int main() {
    int max = 0,x;
    while(1) {
        printf("Enter a number: ");
        scanf("%d",&x);

        if(x>max) max=x;
        if(x<=0) break;
    }

printf("%d#n", max);

return 0;
}