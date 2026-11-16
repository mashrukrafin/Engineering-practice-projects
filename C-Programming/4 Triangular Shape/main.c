#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int x,y,z,i,p;
    char sh[6];
    while (1) {
    printf("Enter the shape: (Press 'Quit' to terminate) \n");
    printf("a. right skew\nb. right skew(upside down)\nc. left skew\nd. left skew(upside down)\n");
    scanf(" %s",sh);
    if (strcmp(sh,"Quit")==0)
    {
         break;
    }
    else
    {
    switch (sh[0])
    {
        case 'a' :
        case 'A' :
             {
    printf("Enter the size:\n");
    scanf("%d",&z);
    for (x=1; x<=z; x=x+1)
    {
        for (i=1; i<=x; i=i+1) {
            printf("* ",i);
        }
           printf("\n",x);
    }
    break;
        }
        case 'b' :
        case 'B':
            {
    printf("Enter the size:\n");
    scanf("%d",&z);
    for (x=z; x>=1; x=x-1)
    {
        for (i=x; i>=1; i=i-1) {
            printf("* ",i);
        }
           printf("\n",x);
        }
        break;
           }
        case 'c' :
        case 'C' :
            {
    printf("Enter the size:\n");
    scanf("%d",&z);
   // for (x=z; x>=1; x=x-1)
    //{
         //   for (y=x-1; y>=1; y=y-1) {
        //printf("  ",y);}
          //  for (i=x; i<=z; i=i+1) {
       // printf("* ",i);}
          //  printf("\n",x);
   //  }
       for (x=1; x<=z; x=x+1)
    {
            for (y=x; y<=z-1; y=y+1) {
        printf("  ",y);}
            for (i=1; i<=x; i=i+1) {
        printf("* ",i);}
            printf("\n",x);
     }
     break;
        }
        case 'd' :
        case 'D' :
            {
    printf("Enter the size:\n");
    scanf("%d",&z);
    for (x=z; x>=1; x=x-1)
    {
            for (y=x; y<=z-1; y=y+1) {
     printf("  ",y);}
                for (i=x; i>=1; i=i-1) {
     printf("* ",i);
        }
     printf("\n",x);
     }
     break;
        }
        default : {
     printf("\nData error!\n\n");
            continue;
        }
}
}
  printf ("\nDo you wanna continue?\n1.Yes\n2.No\n");
  scanf("%d",&p);
  if (p==2)
    break;
}
 printf("\nThe system is terminated!");
}


