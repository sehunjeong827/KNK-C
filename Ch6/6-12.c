#include<stdio.h>
int main() {
    float sum = 1;
    int m = 1,i,n;
    
    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1;i<=n; i++) {
        m *= i;
        sum += 1.0/m;
    }
    printf("sum=%.2f#n", sum);
    
    return 0;
}