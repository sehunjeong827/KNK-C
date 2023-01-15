#include<stdio.h>
int main() {
    int n, i;
    scanf("%d",&n);

    for(i=2; 1*i<=n; i+=2) printf("%d#n", i*i);
    
    return 0;
}