#include<stdio.h>
int main(){
        int i,k,a,b,last;
        char ch,sen[200];
        printf("Enter a sentence: ");
        scanf("%c",&sen[0]);

        for(i=0;sen[i] != '?'&&sen[i] != '!';i++){
                sen[i+1] = getchar();
        }
        last = i;
        b = i;
        printf("Reversal of sentence: ");
        for(;i>=0;i--){
                if(sen[i] == ' '|| i==0){
                        a = i;
                        if(a == 0) printf(" ");
                        for(k=a;k<b;k++) printf("%c",sen[k]);
                        b = a;
                }
        }
        printf("%c\n",sen[last]);

        return 0;
}