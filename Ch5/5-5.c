#include<stdio.h>
int main() {
    float value;
    scanf("%f", &value);
    
    if(value<1) printf("Calm");
    else if(value<4) printf("Light air");
    else if(value<28) printf("Breeze");
    else if(value<48) printf("Gale");
    else if(value<64) printf("Storm");
    else printf("Hurricane");

    return 0;
}