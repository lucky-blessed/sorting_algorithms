#include "sort.h"
/**
 * lomuto_partition - Lomuto partition scheme for quick sort
 *
 * @array: the array to be partitioned
 * @low: starting index of the partition
 * @high: ending index of d parti
 * @size: Numb of elem in the array
 *
 * Return: index of d pivot elem after parti
 */
size_t lomuto_partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot, temp;
	size_t i, j;

	pivot = array[high];
	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] != array[high])
	{
		temp = array[i];
		array[i] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i);
}

/**
 * quick_sort_recursive - Recusive funct for Quick Sort
 *
 * @array: d array to be sorted
 * @low: starting index of d partion
 * @high: ending index of the partition
 * @size: number of elem in array
 */
void quick_sort_recursive(int *array, size_t low, size_t high, size_t size)
{
	size_t pivot;
	
	if (low < high)
	{
		pivot = lomuto_partition(array, low, high, size);
		if (pivot > 0)
			quick_sort_recursive(array, low, pivot -1, size);
		quick_sort_recursive(array, pivot +1, high, size);
		}
}

/**
 * quick_sort - sort an array of int in asce ord using quick sort
 *
 * @array: the array to be sorted
 * @size: Num of ele in the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sort_recursive(array, 0, size - 1, size);
}
