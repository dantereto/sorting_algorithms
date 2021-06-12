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
  int pivot = array[hi];
  int i = (lo - 1);
  int j;
  for (j = lo; j < hi - 1; j++)
    {
      if (array[j] <= pivot)
        {
	  i++;
	  swap(&array[i], &array[j]);
	  print_array(array, size);
        }
    }
  swap(&array[i + 1], &array[hi]);
  print_array(array, size);
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
