#include<stdio.h>
void reduce(int numerator,int denumerator,int*reduced_numerator,int*reduced_denumerator);
int main(){
        int x,y,a,b;
        printf("Enter x y (x<y) ");
        scanf("%d %d",&x,&y);
        reduce(x,y,&a,&b);
        printf("%d / %d\n",a,b);
        return 0;
}
void reduce(int numerator,int denumerator,int*reduced_numerator,int*reduced_denumerator){
        int temp,nu = numerator, denu = denumerator;
        while(numerator!=0) {
                temp = denumerator;
                denumerator = numerator;
                numerator = temp % numerator;
        }
        *reduced_numerator = nu/denumerator;
        *reduced_denumerator = denu/denumerator;
}