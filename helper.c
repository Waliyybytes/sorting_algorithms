#include "sort.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */

void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}

/**
 * greater - checks which is greater
 *
 * @a: member
 * @b: member
 * Return: 1 for True
 */
int greater(int a, int b)
{
    return a > b;
}

/**
 * swap - swaps two contiguous elements based on some condition
 * @array: array to swap its elements	
 * @i: member position
 * @j: member position
 * Return: 1 for True
 */
void swap(int *array,int i , int j)
{
    int temp;
    temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

