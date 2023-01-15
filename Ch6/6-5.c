#include<stdio.h>
int main() {
    int x,y,i=0, temp=10, n=0;
    scanf("%d",&x);
    y = x;
    do {
        i++;
        }while((x/=10) != 0);

    printf("i = %d#n", i);
    while(1) {
        printf("%d",y%10);
        for(int n=0;n<i-1;n++) {
            temp = 10;
            printf("%d", (y%temp)/(temp/10));
        }
        if(y/temp==0) break;
    }

    printf("\n");
    
    return 0;
}