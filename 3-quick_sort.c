#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 *
 * @array: array to be sorted
 * @size: number of numbers in array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	int pivot = array[size - 1];
	size_t i = -1, j;

	if (size < 2 || array == NULL)
		return;

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				array[i] ^= array[j];
				array[j] ^= array[i];
				array[i] ^= array[j];
				print_array(array, size);
			}
		}
	}

	i++;
	if (i != size - 1 && i != j )
	{
		array[i] ^= array[size - 1];
		array[size - 1] ^= array[i];
		array[i] ^= array[size - 1];
		print_array(array, size);
	}
	quick_sort(array, i);
	quick_sort(array + i + 1, size - i - 1);
}
