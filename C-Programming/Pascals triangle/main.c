#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x,i,n,a,c=-1,p,q;
    printf("Input the range: ");
    scanf("%d",&p);
    q=p;
    int pas[q][q];
    //pas[p][q]={0};

    for (i=0; i<p; i++)
    {
        for (n=0; n<=i; n++)
        {
            if ((n==0) || (i==n))
                pas[i][n]=1;
                else
                    //pas[i][n]=0;
                   pas[i][n]=pas[i-1][n-1]+pas[i-1][n];
        }
        //for (n=0; n<=i; n++)
      //  {
         //   if ((n!=0) || (i!=n))
         //    pas[i][n]=pas[i-1][n-1]+pas[i-1][n];
       // }
    }

    for (x=p; x>=1; x--)
    {
        c++;
       for (i=x-1; i>=1; i--)
           {
                printf("  ");
            }
        for (n=c; n<=c; n++)
        {
            for (a=0; a<=n; a++)
                printf("%d  ",pas[n][a]);
        }
        printf("\n");
    }
}
