#include "sort.h"

/** bubble_sort -  sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: array
 * @size:
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
    int temp;
    bool swapped = true;
    size_t i;

    while (swapped)
    {
        swapped = false;
        for (i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
                print_array(array, size);
	    }
	}
    }
}
