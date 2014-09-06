#include <cs50.h>
#include <stdio.h>
#define true 1
#define false 0

int findrev(int value, int values[], int n)
{
  int low = 0;
  while (low < n)
  {
    int mid = (low + n) / 2;
    int midval = values[mid];
    if (midval != -1)
    {
      if (midval > value)
      {
        low = mid + 1;
      }
      else if (midval < value)
      {
        n = mid;
      }
      else
      {
        return mid;
      }
    }
    else
    {
      int mid = (low-1 + n) / 2;
      int midval = values[mid];
      if (midval > value)
      {
        low = mid - 1;
      }
      else if (midval < value)
      {
        n = mid;
      }
      else
      {
        return mid;
      }
    }
  }
  return -1;
}

int main (int argc, string argv[]) {
  int a[9] = {8, 7, 6};
  printf("%d\n", findrev(2, a, sizeof(a)));
  return 0;
}
