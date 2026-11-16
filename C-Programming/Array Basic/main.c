#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, d[5];
    printf("Enter a number of 5 digit: \n");
    scanf("%d", &n );

    for(int i=4; i>=0; i--){
        d[i] = n%10;  n=n/10;
    }

    for(int i=0; i<5; i++)
        printf("%d   ",d[i]);

return 0;
}
