#include<stdio.h>
int main(){
        int a[5][5],r,c,i,sum[5][2]={0};
        for(r=0;r<5;r++){
                printf("Enter row %d:",r+1);
                for(c=0;c<5;c++){
                        scanf("%d",&a[r][c]);
                        sum[r][0] += a[r][c];
                        sum[c][1] += a[r][c];
                }
        }
        printf("Row totals: ");
        for(i=0;i<5;i++) printf("%d ",sum[i][0]);
        printf("\nColumn totals: ");
        for(i=0;i<5;i++) printf("%d ",sum[i][1]);
        printf("\n");

        return 0;
}