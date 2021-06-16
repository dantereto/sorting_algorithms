#include "sort.h"
/**
 * swap - swap the numbers od the array
 *
 * @yp: firts element
 * @xp: second element
 * Return: Always 0 (Success)
 */

void swap(int *xp, int *yp)
{
	int temp = *xp;

	*xp = *yp;
	*yp = temp;
}

/**
 * partition - lomuto partition
 *
 * @array: the array
 * @size: teh size of the array
 * @lo: lower
 * @hi: higher
 * Return: Always 0 (Success)
 */

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

/**
 * sort_lomuto - sort the lomuto partition
 * @array: the array
 * @size: teh size of the array
 * @lo: lower
 * @hi: higher
 * Return: Always 0 (Success)
 */

void sort_lomuto(int *array, size_t size, int lo, int hi)
{
	if (lo < hi)
	{
		int pos = partition(array, size, lo, hi);

		sort_lomuto(array, size, lo, pos - 1);
		sort_lomuto(array, size, pos + 1, hi);
	}
}

/**
 * quick_sort - a quick sort
 *
 * @array: the size of the array
 * @size: the size of the array
 * Return: Always 0 (Success)
 */

void quick_sort(int *array, size_t size)
{
	sort_lomuto(array, size, 0, size - 1);
}
