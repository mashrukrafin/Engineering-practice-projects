#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,r,a,b,p1,p2;
    printf("Enter n and r respectively\n");
    scanf("%d%d", &n,&r);
    if (n>=r)
    {
    a=n-r;
    p1=1;
    p2=1;
    for (n=n; n>=1; n=n-1) {
        p1=p1*n;
    }
    for (a=a; a>=1; a=a-1) {
        p2=p2*a;
    }
        b=p1/p2;
    printf("The ans is %d",b);
}
 else
        {
        printf("Wrong Value!");
    }
}
