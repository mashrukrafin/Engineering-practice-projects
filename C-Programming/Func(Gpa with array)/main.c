#include <stdio.h>
#include <stdlib.h>

int gpa(float x[5][4]);
void avg(float x[5][4]);
void main()
{
    int i,n,x;
    float s[5][4];
    for (i=0; i<5; i++) {
            printf ("Enter the marks of student%d:\n",i+1);
           for (n=0; n<4; n++)
           {
               scanf("%f",&s[i][n]);
           }
    }
    avg(s);
}

int gpa(float x[5][4])
{
    int a,i,n;
    float gp[5]={0};
    for (i=0; i<5; i++) {
           for (n=0; n<4; n++)
           {
        if (x[i][n]>=90) {
       x[i][n]=4;
    }
    else if (x[i][n]>=80) {
       x[i][n]=3.5;
    }
    else if (x[i][n]>=70) {
        x[i][n]=3;
    }
    else if (x[i][n]>=60) {
        x[i][n]=2.5;
    }
    else {
     x[i][n]=0;
    }
           }
    }
    for (i=0; i<5; i++) {
           for (n=0; n<4; n++) {
           gp[i]=gp[i]+x[i][n];
           }
           gp[i]=gp[i]/4;
    }
    for (i=0; i<5; i++)
    {
        printf("\nStudent%d gpa is %.2f",i+1,(float) gp[i]);
    }
}

void avg(float p[5][4])
{
        int i,n,y,a;
        float gp[4]={0};
        for (i=0; i<4; i++) {
           for (n=0; n<5; n++)
           {
               gp[i]=gp[i]+p[n][i];
           }
           gp[i]=gp[i]/5;
        }
        for (i=0; i<4; i++)
    {
        printf("\nSubject%d average is %.2f",i+1,(float) gp[i]);
    }
        printf("\n");
        gpa(p);
}
