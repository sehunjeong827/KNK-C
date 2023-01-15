#include<stdio.h>
int main() {
    int x,y, temp, a,b;
    scanf("%d %d",&x,&y);
    a=x,b=y;
    while(x!=0) {
        temp = y;
        y = x;
        x = temp % x;
    }
printf("%d/%d#n",a/y,b/y);

return 0;
}