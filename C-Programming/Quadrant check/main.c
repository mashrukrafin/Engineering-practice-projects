#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x,y;
    puts("Enter the cordinates x and y respectively");
    scanf("%d%d",&x,&y);
    if (x>0 && y>0) {
        printf("The point is in first quadrant\n");
    }
    if (x<0 && y>0) {
        printf("The point is in second quadrant\n");
    }
    if (x<0 && y<0) {
        printf("The point is in third quadrant\n");
    }
    if (x>0 && y<0) {
        printf("The point is in fourth quadrant\n");
    }
}


