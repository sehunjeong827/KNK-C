#include<stdio.h>
void selection_sort(int a[],int n);
int main(){
        int i,j,n;
        int a[100];

        printf("Enter a number of integer");
        scanf("%d",&n);
        printf("Enter a series of integers: ");

        for(i=0;i<n;i++){
                scanf("%d",&a[i]);
                }

        selection_sort(a,i);

        printf("\n");
        for(j=0;j<i;j++) printf("%d ",a[j]);

        return 0;
}

void selection_sort(int a[],int n){
        int max = a[0],num,k;
        for(k=0;k<n;k++){
                if(max<a[k]){
                        max = a[k];
                        num = k;
                }
       }
        a[num] = a[n-1];
        a[n-1] = max;
        if(n>=3) {
                selection_sort(a,n-1);
        }
        else return ;
}