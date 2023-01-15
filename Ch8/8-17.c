/*#include<stdio.h>   //GCC에서 실행하기
int main(){
        int i,j,n,r,c,r_p,c_p;
        printf("Enter size of magic squzre(odd number): ");
        scanf("%d",&n);
        int mag_ar[n][n];
        int mag_ar[n][n]; //visual C++에서는 가변길이 배열 사용 불가, GCC에서는 가능
        for(i=0;i<n;i++)
                for(j=0;j<n;j++) mag_ar[i][j] = 0;

        r= 0,c = n/2;
        mag_ar[r][c] = 1;
        r_p = r,c_p = c;

        for(i=1;i<n*n;i++){
                --r;
                ++c;

                if(r == -1&& c == n){
                        r = n-1,c = 0;
                }
                else if(c == n){
                        c = 0;
                }
                else if(r == -1){
                        r = n-1;
                }

                if(mag_ar[r][c] == 0){
                        mag_ar[r][c] = i+1;
                        r_p = r, c_p =c;
                                                }
                else{
                        if(r_p<n-1){
                                mag_ar[r_p+1][c_p] = i+1;
                                r = r_p+1,c = c_p;
                                }
                        }
        }
        for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                        printf("%2d  ",mag_ar[i][j]);
                        if(j == n-1) printf("\n");
                }
        }
        printf("\n");

        return 0;
}
*/
