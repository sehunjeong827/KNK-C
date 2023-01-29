#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define NUM_PLANETS 9
int main(int argc,char*argv[]){
        char*planet[] = {"Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Nepture","Pluto"};
        int i,j,k = 0;
        for(i=1;i<argc;i++){
                for(;;){
                        if(k == 0) argv[i][k] = toupper(argv[i][k]);
                        else argv[i][k] = tolower(argv[i][k]);

                        if(argv[i][k] != '\0') k++;
                        else break;
                }
                for(j=0;j<NUM_PLANETS;j++)
                        if(strcmp(argv[i],planet[j]) == 0){
                                printf("%s is planet %d\n",argv[i],j+1);
                                break;
                        }
                if(j == NUM_PLANETS)
                        printf("%s is not a planet\n",argv[i]);
        }
        return 0;
}