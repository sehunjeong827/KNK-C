#include<stdio.h>
int main(){
        int i,n;
        long double result;

        printf("Enter a positive integer: ");
        scanf("%d",&n);

        for(i=1,result=1;i<=n;i++){
                result *=i;
        }
        printf("%Lf\n",result);


        return 0;
}