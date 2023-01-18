#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#include<stdlib.h>
int roll_dice();
bool play_game();
int main(){
        char ch;
        int T=0,F=0,x;
        srand((unsigned)time(NULL)); // if srand in roll_dice --> same result
        do{                          //(since always initialize when calling), so               
                x = play_game();     // srand in main but, If it's too fast in 1s
                if(x == true) T++;   // you get same result(but,In practice it's hard)
                else F++;

                printf("Play again?\n");
                scanf("%c",&ch);
                if(ch == 'Y'||ch=='y'){
                        getchar();  // elimanate "ebter key"
                        continue;
                }
                else break;
        }while(1);
        printf("Wins: %d Losses: %d\n",T,F);
        return 0;
}
int roll_dice(){
        return (rand()%6+1) + (rand()%6 + 1);
}
bool play_game(){
        int fir = roll_dice(),sec;
        printf("You rolled: %d\n",fir);
        if(fir == 7||fir == 11){
                printf("You win!\n");
                return true;
        }
        else if(fir == 2||fir == 3||fir==12){
                printf("You loose\n");
                return false;
        }

        else{
                printf("Your point is %d\n",fir);
                while(1){
                        sec = roll_dice();
                        printf("You rolled: %d\n",sec);
                        if(fir == sec){
                                printf("You win!\n");
                                return true;
                        }
                        else if(sec == 7){
                                printf("You loose\n");
                                return false;
                        }
                }
        }


}