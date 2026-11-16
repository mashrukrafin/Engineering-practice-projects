#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x,y,c;
    printf("Enter a year\n",x);
    scanf("%d",&x);
    ((x%400)==0)?printf("Its a leap year\n"):printf("Its not a leap year\n");
    printf("Enter a year\n",y);
    scanf("%d",&y);
    ((y%400)==0)?printf("Its a leap year\n"):printf("Its not a leap year\n");
    printf("Enter a year\n",c);
    scanf("%d",&c);
    ((c%400)==0)?printf("Its a leap year\n"):printf("Its not a leap year\n");
}
