#include <stdio.h>
#include <stdlib.h>

void dec(int y[], int c);
int main()
{
    int i,x,b,n=0,y[30];
    char a[10];
    printf("Enter the data to be decrypted:\n");
    printf("Enter the KeyCode to terminate!\n");
    printf("For Ex. \n10011\n1101\nFinish\n\nNow start:\n");
    for (i=0; ; i++) {
            if  (scanf("%d",&b)==0)
        {
            scanf("%s",a);
    if (strcmp(a,"****")==0)
        break;
            else {
                printf("Wrong keycode! Try Again!\n");
        continue;
        }
    }
     y[i]=b;
     n++;
    }

    dec(y,n);
    getch();
}

void dec(int y[], int c)
{
    int i,a,j,b,n=0,sum[30]={0},p[30][10]={0};
    for (j=0; j<c; j++)
    {
        for (i=0; ; i++) {
       p[j][i]=y[j]%10;
       y[j]=y[j]/10;
       if (y[j]==0)
        break;
        }
        n++;
    }

    for (j=0; j<n; j++)
    {
        for (i=0; i!='\n'; i++) {
        a=pow(2,i);
        sum[j]=sum[j]+(p[j][i]*a);
        }
    }

    printf("\nThe decrypted code is: ");
    for (i=0; i<n; i++)
    {
        b=(char) sum[i];
    printf("%c",b);
    }
    printf("\n\n\nTerminating ...");
    }

