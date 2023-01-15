#include<stdio.h>
int main(){
        int a[5][5],r,c,i,sum[5][2]={0},max_q=0,min_q=1000;
        for(r=0;r<5;r++){
                printf("Enter row %d:",r+1);
                for(c=0;c<5;c++){
                        scanf("%d",&a[r][c]);
                        sum[r][0] += a[r][c];
                        sum[c][1] += a[r][c];
                        if(a[r][c]>max_q) max_q = a[r][c];
                        if(a[r][c]<min_q) min_q = a[r][c];
                }
        }

        printf("Totals score for student: ");
        for(i=0;i<5;i++) printf("%d ",sum[i][0]);
        printf("\nAverage scorefor student: ");
        for(i=0;i<5;i++) printf("%.2f ",(float)sum[i][0]/5);
        printf("\nAverage score for quiz: ");
        for(i=0;i<5;i++) printf("%.2f ",(float)sum[i][1]/5);
        printf("\nHigh score for quiz: %d", max_q);
        printf("\nLow score: for quiz: %d\n", min_q);

        return 0;
}