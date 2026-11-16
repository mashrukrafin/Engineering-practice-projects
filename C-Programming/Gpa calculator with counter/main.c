#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x,n,a,b,c,d,i,j,k,l,m;
    n=0;
    a=0;
    b=0;
    c=0;
    d=0;
    while(1) {
    puts("Enter a number(Press 999 to stop):");
    scanf("%d",&x);
    if (x==999) break;
    else if ((x<0)||(x>100)) {
    printf("Wrong number!\n");
    }
    else if (x>=90) {
        printf("Your grade is A!\n");
        n=n+1;}
    else if (x>=80){
        printf("Your grade is B!\n");
        a=a+1;}
    else if (x>=70){
        printf("Your grade is C!\n");
        b=b+1;}
    else if (x>=60){
        printf("Your grade is D!\n");
        c=c+1;}
    else {
        printf("Your grade is F!\n");
        d=d+1;}
    }
    printf("A=");
    for (i=0; i<n; i=i+1){
    printf("*",i);
    }
    printf("\nB=");
    for (j=0; j<a; j=j+1){
    printf("*",j);
    }
    printf("\nC=");
    for (k=0; k<b; k=k+1){
    printf("*",k);
    }
    printf("\nD=");
    for (l=0; l<c; l=l+1){
    printf("*",l);
    }
    printf("\nF=");
    for (m=0; m<d; m=m+1){
    printf("*",m);
    }
}
