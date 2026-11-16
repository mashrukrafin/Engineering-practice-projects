#include <stdio.h>
#include <stdlib.h>

void main()
{
    int w,x,y,z,p=0,q=0,r=0,s=0;
    char st[5];
    int pr[]={80,15,20,100}, item,tpr,tpr1=0,tpr2=0,tpr3=0,tpr4=0;
    printf("1. Milk\n2. Egg\n3. Noodles\n4. Fruits\n");

    while (1)
    {
    printf("Enter an item or type 'quit' to finish: \n");

    if (scanf("%d",&item)==0)
    {
        scanf("%s",st);
        if(strcmp(st,"quit")==0)
        break;
    }

    else if (item==1)
    {
    printf("The price of milk is %d tk per ltr\n",pr[item-1]);
    printf("Enter quantity: \n");
    scanf("%d",&w);

    p=p+w;
    tpr1=p*pr[item-1];

    printf("Total price of %d ltr milk is %d tk\n\n",p,tpr1);
    }

    else if (item==2)
    {
    printf("The unit price of eggs is %d tk\n",pr[item-1]);
    printf("Enter quantity: \n");
    scanf("%d",&x);

    q=q+x;
    tpr2=q*pr[item-1];

    printf("Total price of %d unit eggs is %d tk\n\n",q,tpr2);
    }

    else if (item==3)
    {
    printf("The unit price of noodles is %d tk\n",pr[item-1]);
    printf("Enter quantity: \n");
    scanf("%d",&y);

    r=r+y;
    tpr3=r*pr[item-1];

    printf("Total price of %d unit noodles is %d tk\n\n",r,tpr3);
    }

    else if (item==4)
    {
    printf("The price of fruits is %d tk per kg\n",pr[item-1]);
    printf("Enter quantity: \n");
    scanf("%d",&z);

    s=s+z;
    tpr4=s*pr[item-1];

    printf("Total price of %d kg fruits is %d tk\n\n",s,tpr4);
    }

    else {
        printf("Wrong Data!\n\n;");
    continue;
    }
}
           tpr=tpr1+tpr2+tpr3+tpr4;
           printf("\nItem.   Unit Price   Quantity   Total price\n");
           printf("Milk       80tk         %d\t    %d\t\n",p,tpr1);
           printf("Eggs       15tk         %d\t    %d\t\n",q,tpr2);
           printf("Noodles    20tk         %d\t    %d\t\n",r,tpr3);
           printf("Fruits     100tk        %d\t    %d\t\n",s,tpr4);
           printf("Total                               %d \n",tpr);
           printf ("\nYour total cost is %d tk!\nThank you for shopping!\n",tpr);
}
