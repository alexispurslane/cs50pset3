#include <cs50.h>
#include <stdio.h>
#include "helpers.h"
#define true 1
#define false 0

int main (void) {
  int a[8] = {1, 3, 7, 2, 6, 10, 9, 5};
  for (int i = 0; i < sizeof(a); i++)
  {
    printf("%d, ", a[i]);
  }
  printf("-- sort --\n");
  sort(a, sizeof(a));
  for (int i = 0; i < sizeof(a); i++)
  {
    printf("%d, ", a[i]);
  }
  return 0;
}
