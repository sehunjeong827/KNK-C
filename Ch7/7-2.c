#include<stdio.h>

int main(){

        int i,n;
        scanf("%d",&n);
        getchar();
        for(i=1;i<=n;i++){
                printf("%10d%10d\n",i,i*i);
                if(i%24==0){
                        printf("Press Enter to continue ...");
                        if(getchar()!='\n') break;
                }

        }
        return 0;
}