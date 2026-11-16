#include <stdio.h>
#include <stdlib.h>

void dec(int y);
void bin(int x);
int main()
{
    int x,y,i,n;
    printf("What do you want to do?\n1.Dec to Bin\n2.BIn to Dec\n");
    scanf("%d",&n);
    if (n==1) {
    printf("\nEnter a decimal number:\n");
    scanf("%d",&x);
    bin(x);
    }
    else {
    printf("\nEnter a binary num:\n");
    scanf("%d",&y);
    dec(y);
    }
    return 0;
}

void bin(int x)
{
    int i,a,n=0,p[7];
    for (i=0; ; i++)
    {
        p[i]=x%2;
        x=x/2;
        n++;
        if (x==0)
            break;
    }
    printf("The binary output is: ");
        for (i=n-1; i>=0; i--)
    {
        printf("%d",p[i]);
    }
}

void dec(int y)
{
    int i,a,n=0,sum=0,p[7];
    for (i=0; ; i++)
    {
       p[i]=y%10;
       y=y/10;
       n++;
       if (y==0)
        break;
    }

    for (i=0; i<n; i++)
    {
        a=pow(2,i);
        sum=sum+(p[i]*a);
    }
    printf("The decimal output is: %d",sum);
    }

