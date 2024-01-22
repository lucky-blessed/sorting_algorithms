#include "sort.h"

/**
 * swap_ints - Swap two int in an array
 * @P: fist int
 * @Q: second int to swap
 */
void swap_ints(int *P, int *Q)
{
	int TMP;

	TMP = *P;
	*P = *Q;
	*Q = TMP;
}

/**
 * bubble_sort - Sort integer array in ascend ord
 * @array: Arr of int to sort
 * @size: Arr size
 *
 * Description: Print array after each swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, lent = size;
	bool bubb = false;

	if (array == NULL || size < 2)
		return;

	while (bubb == false)
	{
		bubb = true;
		for (i = 0; i < lent - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubb = false;
			}
		}
		lent--;
	}
}
