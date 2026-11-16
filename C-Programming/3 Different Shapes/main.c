#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n,m,j,x;
   while (1){
        if (x==999)
        break;
   printf("1. Square \n");
   printf("2. Triangle \n");
   printf("3. Rectangle \n");
   printf("Enter a number for a shape! (Enter 999 to stop anytime)\n");
   scanf ("%d",&x);
   if (x==1){
   printf("Enter the size: ");
   scanf("%d",&n);
   for (i=0; i<n; i=i+1){
            printf("\n");
            for (j=0; j<n; j=j+1){
        printf("* ",j);
            }
    }
}
   if (x==2){
    printf("Enter the size: ");
   scanf("%d",&n);
   for (i=1; i<=n; i=i+1){
            printf("\n");
            for (j=1; j<=i; j=j+1){
        printf("* ",j);
            }
    }
   }
   if (x==3){
    printf("Enter the length and width respectively:\n");
   scanf("%d%d",&n,&m);
   for (i=1; i<=m; i=i+1){
            printf("\n");
            for (j=1; j<=n; j=j+1){
        printf("* ",j);
            }
    }
   }
   printf("\n\n");
}
printf("The code is terminated!");
}
