#include "sort.h"
/**
 * cocktail_sort_list - Sort a dou
 *
 * @list: The address
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *start, *end, *now;
	int swap;

	if (!list || !*list || !(*list)->next)
		return;

	start = NULL;
	end = NULL;
	swap = 1;

	while (swap)
	{
		swap = 0;

		/* Forward pass (like bubble sort) */
		for (now = start ? start->next : *list; now && now->next != end; now = now->next)
		{
			if (now->n > now->next->n)
			{
				if (now->next->next)
					now->next->next->prev = now;

				if (now->prev)
					now->prev->next = now->next;
				else
					*list = now->next;

				now->next->prev = now->prev;
				now->prev = now->next;
				now->next = now->next->next;
				now->prev->next = now;

				swap = 1;
				print_list(*list);
			}
		}
		if (!swap)
			break;

		swap = 0;
		end = now;

		/* Backward pass */
		for (; now && now->prev != start; now = now->prev)
		{
			if (now->n < now->prev->n)
			{
				now->prev->prev->next = now;
				if (now->next)
					now->next->prev = now->prev;
				else
					end = now->prev;
				now->prev->next = now->next;
				now->next = now->prev;
				now->prev = now->prev->prev;
				now->next->prev = now;
				swap = 1;
				if (!now->prev)
					*list = now;
				print_list(*list);
			}
		}
		start = now;
	}
}
