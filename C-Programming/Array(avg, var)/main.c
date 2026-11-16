#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[15],n,x,y=0,i, count=0;
    float  avg, var,sum= 0;
    printf("Enter the numbers (-1 to quit):\n");

   for (n=0; ; n=n+1)
    {
        scanf("%d", &a[n]);
        if (a[n] == -1)
            break;
        sum =sum+ a[n];
    }

    avg = sum / n;
    printf("The average is %.2f\n", avg);

    for (i=0; i<=n; i=i+1)
    {
        if (a[i]>avg)
            count=count+1;
            x=(float)a[i]-avg;
            y=(float)y+x;
    }
    var=pow(y,2)/n;
    printf("%d students got numbers above average\n",count);
    printf("The varience is %.2f\n",var);
}
