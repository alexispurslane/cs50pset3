/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#include "helpers.h"
#define true 1
#define false 0

/**
 * Returns true if value is in array of n values, else false.
 */
int bigger(int n)
{
  return n*2;
}

int smaller(int n)
{
  return n/2;
}

void printai(int values[], int n)
{
}

bool search(int value, int values[], int n)
{
  int low = 0;
    while (low < n)
  {
    int mid = (low + n) / 2;
    int midval = values[mid];
    if (midval < value)
    {
      low = mid + 1;
    }
    else if (midval > value)
    {
      n = mid;
    }
    else
    {
      return true;
    }
  }
  return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
  bool swapped = false;
  do
  {
    swapped = false;
    for (int i = 0; i+1 < n; i++)
    {
      if (values[i] > values[i+1])
      {
        int tmp = values[i];
        values[i] = values[i+1];
        values[i+1] = tmp;
        swapped = true;
      }
    }
    printai(values, n);
  } while (swapped);
  return;
}
