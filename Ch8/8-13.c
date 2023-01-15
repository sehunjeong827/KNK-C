#include<stdio.h>
int main(){
        int a,b,i=0;
        char ch_f,ch_name[20]={0};
        printf("Enter a first and last name: ");
        scanf("%c",&ch_f);
        printf("You entered the name: ");

        while(getchar() != ' ');
        for(i=0;a<20;i++){
                ch_name[i] = getchar();
                if(ch_name[i] == '\n') break;
                printf("%c",ch_name[i]);
        }
        printf(", %c\n",ch_f);

        return 0;
}