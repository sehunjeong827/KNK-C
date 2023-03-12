#include<stdio.h>

struct time{
        int departure;
        int arriving;
}time_arr[8] = {{480,616},{583,712},{679,811},{767,900},{840,968},{945,1075},{1140,1280},{1305,1438}};

int main(){
        int i,hh,mm,sum;

        printf("Enter a 24-hour time: (hh:mm)");
        scanf(" %d: %d",&hh,&mm);
        sum = 60*hh + mm;

        for(i=0;i<8;i++){
                if(sum <= time_arr[i].departure){
                        printf("%d:%d(departure), %d:%d(arrival)\n",time_arr[i].departure /60, time_arr[i].departure %60, time_arr[i].arriving /60, time_arr[i].arriving %60);
                return 0;
                }
        }
        printf("Nothing\n");
        return 0;
}