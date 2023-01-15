#include<stdio.h>
#include<math.h>
int main(){
        double x,y=1;

        printf("Enter a positive number: ");
        scanf("%lf",&x);

        while(fabs(y-x/y) > 0.00001){
                y= (x/y + y)/2;
                printf("y = %lf\n",y);
        }

        printf("Square root: %lf\n",y);

        return 0;
}