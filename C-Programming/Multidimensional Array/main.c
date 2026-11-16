#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int x,y,z,a,b,stud[3][4],max=0,sum=0,max1=0;

    for (x=0; x<3; x=x+1) {
    printf("Type the numbers of the student%d:\n",x+1);
    for (y=0; y<4; y=y+1) {
    scanf("%d",&stud[x][y]);
    }
    printf("\n");
    }

    printf("      Sub1  Sub2  Sub3  Sub4\n");
    for (a=0; a<3; a=a+1){
        printf("Stud%d  ",a+1);
        for(b=0; b<4; b=b+1) {
    printf("%d    ",stud[a][b]);
        }
        printf("\n");
    }
        printf("\n");

        for (a=0; a<4; a=a+1){
        for(b=0; b<3; b=b+1) {
             if (max<stud[b][a])
                max=stud[b][a];
        }
        printf("Sub%d max= %d\n",a+1,max);
        max=0;
    }

        for (a=0; a<3; a=a+1){
        for(b=0; b<4; b=b+1) {
              sum=sum+stud[a][b];
        }
        if (max1<sum) {
            max1=sum;
            z=a+1;
        }
        sum=0;
        }
        printf("\nStud%d is the best student among all of them!\n",z);
}
