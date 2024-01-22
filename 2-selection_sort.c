#include "sort.h"
/**
 * selection_sort - Sorts arr of int in asce ord using select sort
 * @array: Array to be sorted
 * @size: Num of ele in the arr
 */
void selection_sort(int *array, size_t size)
{
	size_t p, q, idx_min;
	int tmp;

	if (!array || size < 2)
		return;

	for (p = 0; p < size - 1; p++)
	{
		idx_min = p;

		for (q = p + 1; q < size; q++)
		{
			if (array[q] < array[idx_min])
				idx_min = q;
		}
		if (idx_min != p)
		{
			tmp = array[p];
			array[p] = array[idx_min];
			array[idx_min] = tmp;
			print_array(array, size);
		}
	}
}
