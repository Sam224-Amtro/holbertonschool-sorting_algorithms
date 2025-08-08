#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the bubble sort algorithm
 * @array: Array of integer
 * @size: Size of the array
 *
 * * Description: Goes through the array repeatedly, compares
 * adjacent elements and swaps them if they are in the wrong order.
 * Prints the array after each swap.
 */

void bubble_sort(int *array, size_t size)
{
	size_t k, j;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (k = 0; k < size - 1; k++)
	{
		for (j = 0; j < size - k - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				print_array(array, size);
			}
		}
	}
}
