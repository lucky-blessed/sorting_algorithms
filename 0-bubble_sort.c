#include "sort.h"
/**
 * bubble_sort - Sort an array
 *
 * @array: The arr
 * @size: Number of
 */
void bubble_sort(int *array, size_t size)
{
	size_t p, q;
	int tmp;
	int swap;

	if (!array || size < 2)
		return;

	for (p = 0; p < size - 1; p++)
	{
		swap = 0;
		for (q = 0; q < size - p - 1; q++)
		{
			if (array[q] > array[q + 1])
			{
				tmp = array[q];
				array[q] = array[q + 1];
				array[q + 1] = tmp;
				swap = 1;
				print_array(array, size);
			}
		}
		if (swap == 0)
			break;
	}
}
