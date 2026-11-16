#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=0,i;
    char x[55];
        printf("Write a sentence:\n");
        gets(x);
        printf("\nThe sentence as alternated capital letter:\n");
        for (i=0; i<strlen(x); i=i+2)
        {
            printf("%c",toupper(x[i]));
            printf("%c",tolower(x[i+1]));
        }
        printf("\n");
    return 0;
}
