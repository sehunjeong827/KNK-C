#include<stdio.h>
int main() {
    int i;
    scanf("%d",&i);

    if(i<10) printf("1digit#n");
    else if(i<100) printf("2digit\n");
    else if(i<1000) printf("3digit#n");
    else printf("ERROR");
    
    return 0;
}