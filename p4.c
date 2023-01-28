#include <stdio.h>

int main()
{
    int u,l,i,arm,r, z;
    printf("enter lower limit\n");
    scanf("%d",&l);
    printf("enter upper limit\n");
    scanf("%d",&u);
    for(i=l;i<=u;i++){
        arm = 0;
        z = i;
        while(z > 0){
            r = z % 10;
            arm = arm + r*r*r;;
            z = z / 10;
        }
        if(i == arm){
            printf("%d\n", arm);
        }
    }
   return 0;
}