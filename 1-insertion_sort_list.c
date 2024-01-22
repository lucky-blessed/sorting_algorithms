#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers in asc ord
 * using insertion sort
 * @list: The address of doub lin lst
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *now, *tmp;

	if (!list || !*list || !(*list)->next)
		return;

	now = (*list)->next;

	while (now)
	{
		tmp = now->next;

		while (now->prev && now->n < now->prev->n)
		{
			/* Swap nodes */
			if (now->next)
				now->next->prev = now->prev;

			now->prev->next = now->next;
			now->next = now->prev;
			now->prev = now->next->prev;
			now->next->prev = now;

			if (now->prev)
				now->prev->next = now;
			else
				*list = now;
			print_list(*list);
		}
		now = tmp;
	}
}
