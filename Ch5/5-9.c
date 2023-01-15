#include<stdio.h>
int main() {
    int x1,y1,z1,x2,y2, z2;
    printf("First data (mm/dd/yy) :");
    scanf("%d/%d/%d",&x1,&y1,&z1);
    printf("Second data (mm/dd/yy) : ");
    scanf("%d/%d/%d",&x2,&y2, &z2);

    if(z1>z2) printf("%d/%d/%d is earlier than %d/%d/%d\n",x2,y2,z2,x1,y1,z1);
    else if(z1<z2) printf("%d/%d/%d is earlier than %d/%d/%d\n",x1,y1,z1,x2,y2,z2);
    else if (z1==z2) {
        if(y1>y2) printf("%d/%d/%d is earlier than %d/%d/%d#n",x2,y2,z2,x1,y1,z1);
        else if(y1<y2) printf("%d/%d/%d is earlier than %d/%d/%d\n",x1,y1,z1,x2,y2,z2);
        else if(y1==y2) {
            if(x1>x2) printf("%d/%d/%d is earlier than %d/%d/%dwn",x2,y2,z2,x1,y1,z1);
            else if(x1<x2) printf("%d/%d/%d is earlier than %d/%d/%d#n",x1,y1,z1,x2,y2,z2);
            else if(x1==x2) {
                printf("earlier is nothing#n");
            }
        }
    }
    return 0;
}
