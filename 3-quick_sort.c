#include "sort.h"


/**
 * swap- function
 * @array: array to sort
 * @i: index
 * @j: index
 * Return: Nothing
 */

void swap(int *array, int i, int j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}


/**
 * sort_partition- function
 * @array: array to sort
 * @lo: member
 * @hi: member
 * @size: size of array
 * Return: Nothing
 */

int sort_partition(int *array, int lo, int hi, size_t size)
{
	int pivot, i, j;

	pivot = array[hi];
	i = lo - 1;
	for (j = lo; j < hi; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(array, i, j);
			if (i != j)
				print_array(array, size);
		}
	}
	i++;
	swap(array, i, hi);
	if (i != hi)
		print_array(array, size);
	return (i);
}

/**
 * quicksort - function
 * @array: array to sort
 * @lo: member
 * @hi: member
 * @size: size of array
 * Return: Nothing
 */

void quicksort(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo >= hi || lo < 0)
		return;
	p = sort_partition(array, lo, hi, size);
	quicksort(array, lo, p - 1, size);
	quicksort(array, p + 1, hi, size);
}

/**
 * quick_sort - function
 * @array: array to sort
 * @size: size of array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}

