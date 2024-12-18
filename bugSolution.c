#include <stdio.h>
#include <limits.h>

int main() {
  int x = 10;
  int *ptr = &x;

  // Check for potential overflow before assigning a new value
  if (20 > INT_MAX - x){
    fprintf(stderr, "Integer overflow detected!\n");
    return 1; // Indicate an error
  }

  *ptr = 20;
  printf("%d\n", x);
  return 0;
}
