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
  printf("{");
  for (int i = 0; i < n; i++)
  {
    printf("%d", values[i]);
    if (i+1 != n) {
      printf(", ");
    }
  }
  puts("}");
}

bool search(int value, int values[], int n)
{
  int low = 0;
  while (low < n)
  {
    int mid = values[(low + n) / 2];
    if (mid < value)
    {
      low = mid+1;
    }
    else if (mid > value)
    {
      n = mid;
    }
    else if (mid == value)
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
  int gap = n;
  float shrink = 1.3;
  do
  {
    gap = (int)(gap / shrink);
    if (gap < 1)
    {
      gap = 1;
    }
    swapped = false;
    for (int i = 0; i + gap < n; i++)
    {
      if (values[i] > values[i+gap])
      {
        swapped = true;
        int tmp = values[i];
        values[i] = values[i+gap];
        values[i+gap] = tmp;
      }
    }
  } while (swapped && gap != 1);
  return;
}
