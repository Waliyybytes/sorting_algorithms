#include "sort.h"

/**
 * selection_sort - function
 * @array: array to sort
 * @size: size of array
 * Return: Nothing
 */


void selection_sort(int *array, size_t size)
{
	size_t i, j, a;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		a = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[a])
				a = j;
		}
		if (i != a)
		{
			tmp = array[a];
			array[a] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
