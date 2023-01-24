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
	if (size < 2)
		return;

	int pivot = array[size - 1];
	int i = 0, j;

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			i++;
		}
	}

	if (i != j)
	{
		int temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		print_array(array, size);
	}

	quick_sort(array, i);
	quick_sort(array + i + 1, size - i - 1);
}
