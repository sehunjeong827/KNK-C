#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
        int r,c,i,j=0,val,r_p=0,c_p=0;
        char ar[10][10];
        srand(time(NULL));

        for(r=0;r<10;r++)
                for(c=0;c<10;c++) ar[r][c] = '.';

        r = 0,c = 0,ar[r][c] = 'A';
        for(i=0;i<25;i++){
                switch(val = rand()%4){
                        case 0: r-=1; break;
                        case 1: c+=1; break;
                        case 2: r+=1; break;
                        case 3: c-=1; break;
                }
                if(r == -1||r == 10||c == -1||c ==10) r=r_p,c=c_p,i--;
                else if(ar[r][c]=='.'){
                        ar[r][c] = 66+i,r_p=r,c_p=c;
                        if(r<9&&r>0&&c>0&&c<9&&ar[r-1][c]!='.'&&ar[r+1][c]!='.'&&ar[r][c-1]!='.'&&ar[r][c+1]!='.') break;
                        else if(c==0&&ar[8][0]!='.'&&ar[9][1]!='.') break;
                        else if(r==0&&ar[0][8]!='.'&&ar[1][9]!='.') break;
                        else if(r==9&&ar[9][8]!='.'&&ar[8][9]!='.') break;
                        else if(c==0&&ar[r+1][c]!='.'&&ar[r-1][c]!='.'&&ar[r][c+1]!='.') break;
                        else if(c==9&&ar[r+1][c]!='.'&&ar[r-1][c]!='.'&&ar[r][c-1]!='.') break;
                        else if(r==0&&ar[r+1][c]!='.'&&ar[r][c+1]!='.'&&ar[r][c-1]!='.') break;
                        else if(r==9&&ar[r-1][c]!='.'&&ar[r][c+1]!='.'&&ar[r][c-1]!='.') break;
                        continue;
}              //각꼭짓점의 경우3, 최외각 모서리경우4, 8x8경우1
                else if(ar[r][c]!='.')i--,r=r_p,c=c_p;
        }
        for(r=0;r<10;r++)
                for(c=0;c<10;c++){
                        printf("%c ",ar[r][c]);
                        if(c==9) printf("\n");
                }


        return 0;
}