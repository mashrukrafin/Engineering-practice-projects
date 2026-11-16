#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x[10],i,n,y,pp=0,qq=0,p[8],q[8],*ptr,*qtr;
    ptr=p; qtr=q;
    printf("Enter any 10 numbers to find even or odd!\n");
    for (i=0; i<10; i++)
    {
        scanf("%d",&x[i]);}

    for (i=0; i<10; i++)
    {
       if (x[i]%2==0) {
        *ptr=x[i];
        ptr++;
        pp++;
        }
       else {
        *qtr=x[i];
        qtr++;
        qq++;
        }
    }

    printf("\nThe even numbers are:");
    for (i=0; i<pp; i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
    printf("The odd numbers are:");
    for (i=0; i<qq; i++)
    { printf("%d ",q[i]);}
    printf("\n");
}
