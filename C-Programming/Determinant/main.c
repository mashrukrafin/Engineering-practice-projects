#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,x,y,a,det,mat[2][2];
    for (i=0; i<2; i++)
      {
    printf("Enter two num :\n");
        for (n=0; n<2; n++)
         {
            scanf("%d",&mat[i][n]);
         }
    }
        det=mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0];
            printf("The determinant is:%d ",det);
    return 0;
}
