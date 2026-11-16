#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void ee(char x[]);

int main() {
    int n = 0;
    char x[25];
    while (1) {
        printf("Write a sentence (Or STOP to quit):\n");
        fgets(x,sizeof(x),stdin);
        if (strcmp(x, "STOP") == 0)
            break;
        ee(x);
    }
    return 0;
}

void ee(char x[]) {
    int i,n,p=0,c=0;
    int a=0;
  n= strlen(x);
  for (i=0; i<n; i++)
  {
      a++;
      p++;
      if (x[i]==' ') {
             if (a-1>2)
        c++;
        a=0;
      }
  }

  if (a>2)
    c=c+1;
      printf("\nTotal number of words containing more than 2 letters is %d\n\n", c);
}
