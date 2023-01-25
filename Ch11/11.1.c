#include<stdio.h>
void pay_amount(int dollars,int*twenties,int*tens,int*fives,int*ones);
int main(){
        int i,tw,te,fi,on;
        printf("Enter a dollar amount: ");
        scanf("%d",&i);
        pay_amount(i,&tw,&te,&fi,&on);
        return 0;
}
void pay_amount(int dollars,int*twenties,int*tens,int*fives,int*ones){
        *twenties = dollars/20;
        *tens = (dollars%20)/10;
        *fives = (dollars%10)/5;
        *ones = dollars%5;
        printf("twenties: %d\ntens: %d\nfives: %d\nones: %d\n",*twenties,*tens,*fives,*ones);
}