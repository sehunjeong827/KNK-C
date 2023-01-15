#include<stdio.h>
int main() {
    float value;
    scanf("%f", &value);

    if(value<750) printf("%f#n", value*0.01);
    else if(value<2250) printf("%f#n",7.5 + value*0.02);
    else if(value<3750) printf("%f#n",37.5 + value*0.03);
    else if(value<5250) printf("%f#n",82.5 + value*0.04);
    else if(value<7000) printf("%f#n",142.5 + value*0.05);
    else printf("%f#n",230.0 + value*0.06);
    
    return 0;
}