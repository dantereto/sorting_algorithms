#include <stdio.h>
#include "sort.h"

void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}
/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void bubble_sort(int *array, size_t size)
{
  int flag;
  size_t i, j;
  for (i = 0; i < size; i++)
    {
      flag = 0;
      for (j = 0; j < size - i - 1; j++)
	{
	  if (array[j] > array[j + 1])
	    {
	      swap(&array[j], &array[j+1]);
	      print_array(array, size);
	      flag = 1;
	    }
	}
      if (flag == 0)
	break;
    }
}
