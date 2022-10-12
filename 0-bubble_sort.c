#include "sort.h"

/**
 * bubble_sort - function
 * @array: member
 * @size: member
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (greater(array[j], array[j + 1]))
			{
				swap(array, j, j + 1);
				print_array(array, size);
			}
		}
	}
}
