#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x,y,z;
    puts("Enter three numbers");
    scanf("%d%d%d",&x,&y,&z);
    if (x>y){
       if (x>z){
        if (y>z){
        printf("The sorted numbers are %d, %d, %d \n",x,y,z);
        }
        else
            printf("The sorted numbers are %d, %d, %d \n",x,z,y);
    }
    else
            printf("The sorted numbers are %d, %d, %d \n",z,x,y);
}
    else if (y>x){
        if (y>z){
            if (x>z){
            printf("The sorted numbers are %d, %d, %d \n",y,x,z);
            }
        else
            printf("The sorted numbers are %d, %d, %d \n",y,z,x);
    }
    else
            printf("The sorted numbers are %d, %d, %d \n",z,y,x);
    }
}
