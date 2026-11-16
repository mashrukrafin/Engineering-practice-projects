#include <stdio.h>
#include <stdlib.h>
#define l 5

void tt(int a[]);
int grad (int *q);

void main()
{
    int x,y,p[l]={0};
    char z;
    z=grad(p);
    //tt(p); //this is also correct.
}

int grad (int *q)
{
    int a,x,i,n;
    while (1) {
    printf("Enter a mark(-1 to exit): ");
    scanf("%d",&a);

        if (a==-1)
        break;
    else if ((a<0) || (a>100)) {
        printf("Wrong Value\n");
    continue;
       }
       else
           {
    if (a>=90) {
        q[0]++;
      printf("A\n");
    }
    else if (a>=80) {
       q[1]++;
      printf("B\n");
    }
    else if (a>=70) {
       q[2]++;
      printf("C\n");
    }
    else if (a>=60) {
        q[3]++;
      printf("D\n");
    }
    else {
        q[4]++;
      printf("F\n");
    }
           }
  }
  tt(q); //i cant pass any local variable to other function
}

//shortcut way without if else
//void updateScore(int score, int grades[]) {
 //   int gradeBoundaries[5] = {90, 80, 70, 60, 0};
 //   char gradeLetters[6] = "ABCDF";
 //   int i;

   // for(i = 0; i < 5; i++) {
  //     if(score >= gradeBoundaries[i]) {
   //         grades[i]++;
   //         printf("%c\n", gradeLetters[i]);
   //         break;
    //    }
   // }
//}

void tt(int a[])
  {
int n,i;
         char x[6]="ABCDF";
       for (i=0; i<=4; i++)
          {
        printf("\n%c: ",x[i]);
        for (n=0; n<a[i]; n++)
            printf("* ");
          }
}
