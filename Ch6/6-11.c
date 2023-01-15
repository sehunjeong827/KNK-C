#include<stdio.h>
int main() {
    int k=40, m=40, l=40,x,y,z;
    while(1) {
        printf("Enter a date (mm/dd/yy) : ");
        scanf("%d/%d/%d",&x,&y, &z);
        if(x==0&&y==0&&z==0) break;
        if(z<1) k=x,m=y, l=z;
        if(x<k) k=x,m=y, l=z;
        if(y<m) k=x,m=y, l=z;
    }

    printf("earliest: %d/%d/%d#n",k,m, 1);
    
    return 0;
}