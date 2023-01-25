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
void partition(int *array, int start, int end)
{
	int pivot = array[end];
	int i = start - 1;
	size_t j;
	int *temp;

	if (start >= end)
		return;

	for (j = start; j < end; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, end + 1);
		}
	}

	i++;
	temp = array[i];
	array[i] = pivot;
	array[end] = temp;
	print_array(array, end + 1);

	partition(array, start, i - 1);
	partition(array, i + 1, end);
}

void quick_sort(int *array, size_t size)
{
	partition(array, 0, size - 1);
}
