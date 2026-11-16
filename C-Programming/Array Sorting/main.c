#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,i,n,a[10],p[10];

    printf("Enter 10 numbers!(From 0-9. Don't Repeat any)\n");
   for (i=0; i<=9; i++)
   {
       scanf("%d",&a[i]);
   }
   x=a[0];

      for (i=1; i<=9; i++)
      {
          if (x<a[i])
            x=a[i];
      }
      p[0]=x;
      y=-10000;

    for (n=1; n<=9; n++) {
         for (i=0; i<=9; i++)
         {
             if ((y<a[i]) && (x>a[i]))
                y=a[i];
              }
              p[n]=y;
              x=y;
              y=-10000;
         }

    printf("After sorting the numbers are:");
    for (n=0; n<=9; n++)
    {
        printf(" %d",p[n]);
    }
    return 0;
}
