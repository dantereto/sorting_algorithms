#include "sort.h"
/**
 * selection_sort - selection sort
 *
 * @array: The array
 * @size: the size of the array
 * Return: Always 0(success)
 */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;
	
	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		size_t min = i;
		for (j = i + 1; j < size; j++)
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
