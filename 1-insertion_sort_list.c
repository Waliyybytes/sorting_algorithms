#include "sort.h"

/**
 * insertion_sort_list - function
 *
 * @list: doubly linked list node
 */

void insertion_sort_list(listint_t **list)
{
	int tmp;
	int *first;
	int *second;
	int tmp1;
	int *third;
	int *fourth;
	listint_t *head;

	head = *list;
	while (head->next != NULL)
	{
		if (head->n > head->next->n)
		{
			tmp = head->n;
			first = (int *)&head->n;
			*first = head->next->n;
			second = (int *)&head->next->n;
			*second = tmp;
			print_list(*list);
			while (head->prev != NULL)
			{
				if (head->n < head->prev->n)
				{
					tmp1 = head->n;
					third = (int *)&head->n;
					*third = head->prev->n;
					fourth = (int *)&head->prev->n;
					*fourth = tmp1;
					print_list(*list);
				}
				else
					head = head->prev;
			}
		}
		else
			head = head->next;
	}
}
