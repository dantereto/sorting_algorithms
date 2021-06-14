#include <stdio.h>
#include "sort.h"
/**
 * shell_sort - a super short
 *
 * @array: the size of the array
 * @size: the size of the array
 */
void shell_sort(int *array, size_t size)
{
size_t n = 1, i = 0, j = 0, gap = 0;
while (n < size / 3)
n = n * 3 + 1;
for (gap = n; gap > 0; gap /= 3)
{
for (i = gap; i < size; i++)
{
int temp = array[i];
for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
array[j] = array[j - gap];
array[j] = temp;
}
print_array(array, size);
}
}
