#include "sort.h"

/**
 * selection_sort - function
 * @array: array to sort
 * @size: size of array
 * Return: Nothing
 */


void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int a = 0;
	int min;
	int tmp;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				a = j;
			}
		}
	if (min != array[i])
	{
		tmp = array[a];
		array[i] = array[a];
		array[a] = tmp;
		print_array(array, size);
	}
	}
}
