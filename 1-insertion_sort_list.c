#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list (int)  in ascending order
 * @list: the doubly linked list to sort
 * Return: Nothing.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *forward, *backward, *tmpr1, *tmpr2, *tmpr3, *tmpr4;

	if (!list || !(*list) || !(*list)->next)
		return;

	for (forward = *list; forward; forward = forward->next)
	{
		for (backward = forward; backward->prev; backward = backward->prev)
		{
			if (backward->n < backward->prev->n)
			{
				tmpr1 = backward->prev->prev;
				tmpr2 = backward->prev;
				tmpr3 = backward;
				tmpr4 = backward->next;
				if (tmpr1)
					tmpr1->next = tmpr3;
				else
					*list = tmpr3;
				tmpr3->next = tmpr2;
				tmpr2->next = tmpr4;
				if (tmpr4)
					tmpr4->prev = tmpr2;
				tmpr2->prev = tmpr3;
				tmpr3->prev = tmpr1;
				backward = backward->next;
				print_list(*list);
			}
		else
			break;
		}
	}
}
