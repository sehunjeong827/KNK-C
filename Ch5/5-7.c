#include<stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b, &c, &d);
    int min, max, min1, max1, min2, max2;
    
    if(a>b) {
        min1 = b;
        max1 = a;
    }
    else {
        min1 = a;
        max1 = b;
    }
    if (c>d) {
        min2 = d;
        max2 = c;
    }
    else {
        min2 = c;
        max2 = d;
    }
    
    if(max1>max2) max = max1;
    else max1 = max2;

    if(min>min2) min = min2;
    else min = min1;

    printf("Largest: %d#n",max);
    printf("Smallest: %d#n", min);
    
    return 0;
}