#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    char pal1[12],pal2[12];
    while (1)
    {
 printf("Enter a string to check if it's palindrome(stop to quit):\n");
        gets(pal1);
      //  pal1[strcspn(pal1,"\n")]=0;
                if (strcmp(pal1,"stop")==0)
            break;
        n=strlen(pal1);
        for (i=0; i<n; i++)
        {
            pal2[n-1-i]=pal1[i];
        }
        if (strcmp(pal1,pal2)==0)
            printf("'%s' is palindrome!\n\n",pal1);
        else
            printf("'%s' is not palindrome!\n\n",pal1);
    }
}
