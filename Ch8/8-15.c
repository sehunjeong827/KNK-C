#include<stdio.h>
int main(){
        int i,n,m;
        char sen[80];
        printf("Enter message to be encrypted: ");
        scanf("%c",&sen[0]);
        for(i=0;sen[i]!='\n';i++){
                sen[i+1] = getchar();
        }
        printf("Enter shift amount (1-25): ");
        scanf("%d", &n);
        printf("Encrypted message: ");
        for(m = 0;sen[m] != '\n';m++){
                if(sen[m]>=65 && sen[m]<=90) printf("%c",(sen[m]-'A'+n)%26 + 'A');
                else if(sen[m]>=97 && sen[m]<=122) printf("%c",(sen[m]-'a'+n)%26 + 'a');
                else printf("%c",sen[m]);
        }
        printf("\n");

        return 0;
}