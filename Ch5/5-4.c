#include<stdio.h>
int main() {
    int i, j;
    scanf("%d: %d",&i,&j);
    if(i>12) printf("%d: %d\n", i-12,j);
    else printf("%d:%d#n",i,j);
    
    return 0;
}