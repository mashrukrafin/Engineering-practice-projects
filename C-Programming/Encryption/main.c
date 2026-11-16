#include <stdio.h>
#include <stdlib.h>

void bin(int x);
int main()
{
    int i,n,a,x,y;
    char asc[30];
    printf("Write Something To Encrypt:\n");
    fgets(asc,sizeof(asc),stdin);
    asc[strcspn(asc,"\n")]=0;
    printf("\nThe Binary Output Of The Characters Are: \n");
    for (i=0; i<strlen(asc); i++)
    {
        x=(int) asc[i];
        bin(x);
    }

    printf("\n\n\nTerminating ...");
    getch();
}

void bin(int x)
{
    int i,a,n=0,c=0,p[8];
    for (i=0; ; i++)
    {
        p[i]=x%2;
        x=x/2;
        n++;
        if (x==0)
            break;
    }
    printf("\n");
        for (i=n-1; i>=0; i--)
    {
        printf("%d",p[i]);
    }
}
