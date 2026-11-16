#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10],i,n,y,p=0;
    printf("Enter 10 numbers to sort!\n");
    for (i=0; i<10; i++)
    {
        scanf("%d",&x[i]);
    }

 //  while (1)
 //   {
        //p=0;
        for (n=1; n<10; n++)
        {
            if (x[n]<x[n-1]) {
                y=x[n];
                x[n]=x[n-1];
                x[n-1]=y;
            //   p=1;
            }
        }
      //  if (p==0) break;
    //}

    printf("The sorted numbers are: \n");
    for (i=0; i<10; i++)
    {
        printf("%d\n",x[i]);
    }
    return 0;
}
