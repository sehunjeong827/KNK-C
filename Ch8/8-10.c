#include<stdio.h>
int main(){
        int min,i;
        int time_ad[9][2]={{0,0},{480,616},{583,712},{679,811},{767,900},{840,968},{945,1075},{1140,1280},{1305,1438}};

        printf("Enter a 24-hour time:(hour:min) ");
        scanf("%d:%d",&time_ad[0][0],&time_ad[0][1]);
        min = 60*time_ad[0][0]+time_ad[0][1];

        for(i=1;i<9;i++){
                if(min<time_ad[i][0]){
                        min = time_ad[i][0];
                        time_ad[0][0] = time_ad[i][0];
                        time_ad[0][1] = time_ad[i][1];
                }
        }
        if(min > 1305) {
                printf("No depature time!!\n");
                return 0;
        }

        printf("closet depature: %d:%d, arrival: %d:%d\n",time_ad[0][0]/60,time_ad[0][0]%60,time_ad[0][1]/60,time_ad[0][1]%60);

        return 0;
}