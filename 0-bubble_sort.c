#include <stdio.h>
#include "sort.h"
/**
 * swap - swap the numbers od the array
 *
 * @yp: firts element
 * @xp: second element
 */
void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}
/**
 * bubble_sort - a bad sort
 *
 * @array: the size of the array
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
int flag;
size_t i, j;
if (array == NULL || size < 2)
return;
for (i = 0; i < size; i++)
{
flag = 0;
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
print_array(array, size);
flag = 1;
}
}
if (flag == 0)
break;
}
}
