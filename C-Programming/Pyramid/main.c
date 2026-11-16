#include <stdio.h>

void main()
{
 int x,y,z,i,j;
     printf("Enter the size:\n");
     scanf("%d",&x);
     for (i=1; i<=x; i++)
     {
         for (y=i; y<=x-1; y++) {
            printf("  ");
         }
         j=1+(i-1)*2;
         for (z=1; z<=j; z=z+1)
         {
             printf ("* ");
         }
            printf("\n");
     }
}
