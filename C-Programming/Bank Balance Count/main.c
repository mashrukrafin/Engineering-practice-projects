#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int id, i=0, x, a, balc[5]={0},b[]={2};
    int cash[5]={0}, rem[5], balr[5]={3000,4000,5000,2000,6000};
    char p[8], pass[8][10]={"bro00", "bro11", "bro22", "bro33", "bro44"};


    printf("Welcome To BroCode!!");
    printf("%s\n\n",&b[0]);
    while (1)
    {
        printf("Enter your ID: ");
        scanf("%d",&id);

        if (id <= 3004 && id >= 3000) {
        a = id % 1000;
        } else {
        printf("Data not found!\n\n");
        continue;
        }

        printf("Enter your password: ");
        scanf("%s",p);

        if (strcmp(p,pass[a])==0) {
        printf("Your account balance is %d tk!\n\n",balr[a]);
        printf("How much would you like to cash out?\n");
        scanf("%d",&balc[a]);
        if (balc[a]<=balr[a]) {
        printf("\n%d tk has been cashed out succesfully!\n",balc[a]);
        cash[a]=cash[a]+balc[a];
        balr[a]=balr[a]-balc[a];
        }
       else {
         printf("\nSorry you don't have sufficient balance!\n\n");
         continue;
       }
        }
        else
        {
            printf("Password doesn't match!\n\n");
            continue;
        }
            printf("Do you want to cash out more?\n");
            printf("1.Yes\n2.No\n");
            scanf("%d",&x);

            if (x==2)
                break;
    }
      printf ("\nSl.     ID No.     Cash out     Balance");
           for (a=0; a<=4; a=a+1)
      {
         if (cash [a] !=0) {
                i=i+1;
            printf ("\n%d.       %d       %dtk\t %dtk",i, a+3000, cash[a], balr[a]);
      }
      }
                  printf("\n\nThank You For Chooosing Our Service!\n");
}
       //  for (a=0; a<=4; a=a+1)
      //{
            //printf ("\n%d.",a+1);
         //if (cash [a] !=0) {
         // printf ("      %d      %dtk\t%dtk", a+3000, cash[a], balr[a]);
        //  }
      //}
