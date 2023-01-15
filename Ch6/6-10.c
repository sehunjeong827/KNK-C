#include<stdio.h>
int main() {
    float sum = 1,x;
    int m = 1,i;
    printf("Enter.x: ");
    scanf("%f",&x);
    for(i=1;1.0/m>=x; i++) {
        m *= i;
        sum += 1.0/m;
    }

printf("sum = %.2f#n", sum);
printf("current term = %.2f#n", 1.0/m);

return 0;
}