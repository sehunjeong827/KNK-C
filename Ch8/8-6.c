#include<stdio.h>
#include<ctype.h>
int main(){
        char mes[100]={0},i;
        printf("Enter message: ");
        scanf("%c",&mes[i]);

        for(i=0;mes[i] != '\n';i++){
        mes[i] = toupper(mes[i]);
        if(mes[i]=='A') mes[i] = '4';
        if(mes[i]=='B') mes[i] = '8';
        if(mes[i]=='E') mes[i] = '3';
        if(mes[i]=='I') mes[i] = '1';
        if(mes[i]=='O') mes[i] = '0';
        if(mes[i]=='S') mes[i] = '5';
        mes[i+1] = getchar();
        }

        printf("In BIFF-speak: ");
        for(i=0;mes[i]!='\n';i++) printf("%c",mes[i]);
        printf("!!!!!!!!!!\n");

        return 0;
}
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