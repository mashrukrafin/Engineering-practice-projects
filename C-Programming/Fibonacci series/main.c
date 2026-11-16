#include <stdio.h>
#include <stdlib.h>

void main()
{
     int x,y,z,n,i,a;
     char st[5];
    while (1)
     {
              x=0;
              y=1;
          printf("Enter the value of n (Type 'stop' to quit) :\n");
          if (scanf("%d",&n)==0)
          {
              scanf("%s",st);
              if (strcmp(st,"stop")==0) {
                printf("\nThe system is terminated!");
                break;
                }
          }
          if (n==1) {
               printf("0\n");
               printf("the value is 0\n");
          }
          else if (n==2) {
                printf("0,1\n");
               printf("the value is 1\n");
          }
          else {
                printf("0,1");
               for (a=3; a<=n; a=a+1) {
       z=x+y;
              printf(",%d",z);
       x=y;
       y=z;
    }
       printf("\nthe value is %d\n",z);
}
}
}
