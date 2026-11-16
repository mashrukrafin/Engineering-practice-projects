
#include <stdio.h>
#define N 5
int main() {
  int i, * ptr, sum = 0;
  int nums[N] = {1, 2, 3, 4, 5};
  ptr = nums;
  for(i = 0; i < N; ++i)
     sum += ptr[i];
  printf("Sum = %d ", sum); // Sum = 15
}
