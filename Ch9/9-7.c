#include<stdio.h>
int power_for(int,int);
int main(){
        int x,n;
        printf("Enter a value of x: ");
        scanf("%d",&x);
        printf("Enter a value of n: ");
        scanf("%d",&n);
        printf("%d^%d = %d ",x,n,power_for(x,n));
        return 0;
}
int power_for(int x,int n){
        int sq;
        if(n == 0) return 1;
        else{
                if(n%2 == 0){
                        sq = power_for(x,n/2);
                        return sq*sq;
                }
                else return x*power_for(x,n-1);
        }
}