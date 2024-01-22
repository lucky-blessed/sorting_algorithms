#include "sort.h"
/**
 * shell_sort - sort an array of int in asce ord using shell sort
 * with the knuth seque
 *
 * @array: the array to be sorted
 * @size: numb of ele in arr
 */
void shell_sort(int *array, size_t size)
{
	size_t space, i, j;
	int temp;

	if (!array || size < 2)
		return;

	for (space = 1; space < size / 3; space = space * 3 + 1)
		;
	for (; space > 0; space = (space - 1) / 3)
	{
		for (i = space; i < size; i++)
		{
			temp = array[i];

			/* Shift ele til the correct position for arr[i] is found */
			for (j = i; j >= space && array[j - space] > temp; j -= space)
			{
				array[j] = array[j - space];
			}

			array[j] = temp;
		}
		print_array(array, size);
	}
}
