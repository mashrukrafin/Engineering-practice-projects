#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float g1, g2, gpa;
    int c1, c2;
    puts("Enter credits of two courses"); scanf("%d%d", &c1, &c2);
    puts("Enter two grades"); scanf("%f%f", &g1, &g2);

    gpa=(c1*g1 + c2*g2)/(c1+c2);
    printf("GPA = %.2f\n", gpa);

    if(gpa>=3.5){
        printf("Good result ! \n");
        printf("Congrats ! \n");
    }
    else
        printf("Try to improve your result ! \n");
}
