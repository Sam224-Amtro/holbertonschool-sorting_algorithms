#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - that sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 * @array: this is the array to sorting
 * @size: th size to array
 *
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
	size_t k, j;
	int temp;

	if (array == NULL && size < 2)
	{
		return;
	}
	for (k = 0; k < size - 1; k++)
	{
		for (j = 0; j < size - k - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
