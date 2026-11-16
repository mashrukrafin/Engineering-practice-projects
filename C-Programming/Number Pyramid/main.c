#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,x,a;
    printf ("Enter the size:\n");
    scanf("%d",&a);
    for (i=1; i<=a; i=i+1) {
        for (x=1; x<=i; x=x+1) {
            printf("%d",x);
    }
            printf("\n",i);
}
}
