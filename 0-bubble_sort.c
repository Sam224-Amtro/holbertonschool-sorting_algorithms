#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the bubble sort algorithm
 * @array: Array of integer
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	/* la declaration k et j sont des compteurs (pour les boucles) */
	size_t k, j;
	int temp; /* le variable temporaire, c'est pour échanger deux nombres */

	/*
	 * je fais une condition
	 * Si le tableau est vide ou a moins de 2 éléments, on ne fait rien
	 */
	if (array == NULL || size < 2)
		return; /* ici c'est parce que ma condition a pris echec */

	/* On répète le tri (size - 1) plusieurs fois */
	for (k = 0; k < size - 1; k++)
	{
		/* Et ici On parcourt le tableau jusqu’à l’endroit déjà trié */
		for (j = 0; j < size - k - 1; j++)
		{
			/* Si deux éléments sont dans le mauvais ordre, on les échange */
			if (array[j] > array[j + 1])
			{
				/* Et apres On échange les deux */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				print_array(array, size);
			}
		}
	}
}
