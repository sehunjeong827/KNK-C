#include<stdio.h>
float tax_cp(float);
int main(){
        float value;
        printf("Enter a income: ");
        scanf("%f", &value);

        printf("tax: %.2f\n",tax_cp(value));

        return 0;
}

float tax_cp(float value){

        if(value<750) value = value*0.01;
        else if(value<2250) value = 7.5 + value*0.02;
        else if(value<3750) value = 37.5 + value*0.03;
        else if(value<5250) value = 82.5 + value*0.04;
        else if(value<7000) value = 142.5 + value*0.05;
        else value = 230.0 + value*0.06;

        return value;
}