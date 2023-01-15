#include<stdio.h>
int main() {
    int x,y, temp;
    scanf("%d %d",&x,&y);
    while(x!=0) {
        temp = y;
        y = x;
        x = temp % x;
    }

printf("%d#n",y);

return 0;