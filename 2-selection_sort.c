#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void selection_sort(int *array, size_t size)
{
  int temp;
  size_t i, j;
  if (array == NULL || size < 2)
    return;
  for (i = 0; i < size-1; i++)
    {
      size_t min = i;
      for (j = i+1; j < size; j++)
	if (array[j] < array[min])
	  min = j;
      if (min != i)
	{
	  temp = array[min];
	  array[min] = array[i];
	  array[i] = temp;
	  print_array(array, size);
	}
    }
}