#include <stdio.h>
#include "sort.h"
void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

int partition(int *array, size_t size,  int lo, int hi) 
{
  int i = 0, j;
  int pivot = 0;
  i = (lo - 1);
  pivot = array[hi];
  for (j = lo; j <= hi - 1; j++)
    {
      if (array[j] < pivot)
	{
	  i++;
	  swap(&array[i], &array[j]);
	  if (i != j)
	    print_array(array, size);
	}
    }
  if (array[i + 1] != array[hi])
    {
      swap(&array[i + 1], &array[hi]);
      if (i + 1 != j)
	print_array(array, size);
    }
  return (i + 1);
}
void sort_lomuto(int *array,size_t size, int lo, int hi)
{
  if (lo < hi)
    {
      int pos = partition(array, size, lo, hi);
      sort_lomuto(array, size, lo, pos -1);
      sort_lomuto(array, size, pos + 1, hi);
    }
}
/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void quick_sort(int *array, size_t size)
{
  sort_lomuto(array, size, 0, size - 1);
}
