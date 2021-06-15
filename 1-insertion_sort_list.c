#include "sort.h"
/**
 * insertion_sort_list - insertion sort with a list *
 * @list: the list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *i = *list;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	while (i)
	{
		while (i->prev != NULL && i->prev->n > i->n)
		{
			i->prev->next = i->next;
			if (i->next != NULL)
				i->next->prev = i->prev;
			i->next = i->prev;
			i->prev = i->next->prev;
			i->next->prev = i;
			if (i->prev != NULL)
				i->prev->next = i;
			else
				*list = i;
			print_list(*list);
		}
		i = i->next;
	}
}
