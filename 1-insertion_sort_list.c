#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @H1: A pointer to the head of the doubly-linked list.
 * @Ni: A pointer to the first node to swap.
 * @n: The second node to swap.
 */
void swap_nodes(listint_t **H1, listint_t **Ni, listint_t *n)
{
	(*Ni)->next = n->next;
	if (n->next != NULL)
		n->next->prev = *Ni;
	n->prev = (*Ni)->prev;
	n->next = *Ni;
	if ((*Ni)->prev != NULL)
		(*Ni)->prev->next = n;
	else
		*H1 = n;
	(*Ni)->prev = n;
	*Ni = n->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_nodes(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}
