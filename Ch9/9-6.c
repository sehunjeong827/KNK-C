#include<stdio.h>
int comp_poly(int);
int main(){
        int x;
        printf("Enter a value of x: ");
        scanf("%d",&x);
        printf("value of polynominal = %d\n",comp_poly(x));
        return 0;
}
int comp_poly(int x){
        int sum = -6,i,k=1;
        for(i=1;i<6;i++){
                k*=x;
                if(i == 1) sum += 7*k;
                else if(i == 2) sum += -1*k;
                else if(i == 3) sum += -5*k;
                else if(i == 4) sum += 2*k;
                else if(i == 5) sum += 3*k;
        }
        return sum;
}