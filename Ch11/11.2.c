#include<stdio.h>
void find_closest_flight(int ,int*,int*);
int main(){
        int x,y,value,dep,arr;
        printf("Enter a 24-hour time(hh:mm)");
        scanf("%d:%d",&x,&y);
        value = 60*x + y;
        find_closest_flight(value,&dep,&arr);
        printf("depature time: %d : %d\n arriving time: %d : %d\n",dep/60,dep%60,arr/60,arr%60);
        return 0;
}
void find_closest_flight(int value,int*depature_time,int*arrival_time){
        if(value<480){
                *depature_time = 480;
                *arrival_time = 616;
        }
        else if(value<583){
                *depature_time = 583;
                *arrival_time = 712;
        }
        else if(value<679){
                *depature_time = 679;
                *arrival_time = 811;
        }
        else if(value<767){
                *depature_time = 767;
                *arrival_time = 900;
        }
        else if(value<840){
             *depature_time = 840;
                *arrival_time = 968;
        }
        else if(value<945){
                *depature_time = 945;
                *arrival_time = 1075;
        }
        else if(value<1140){
                *depature_time = 1140;
                *arrival_time = 1280;
        }
        else if(value<1305){
                *depature_time = 1305;
                *arrival_time = 1438;
        }
        else printf("Nothing#n");
}