#include "sort.h"
/**
 * insertion_sort_list - insertion sort with a list *
 * @list: the list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *i = *list;

	if (list == '\0' || (*list)->next == '\0')
		return;
	while (i)
	{
		while (i->prev != '\0' && i->prev->n > i->n)
		{
			i->prev->next = i->next;
			if (i->next != '\0')
				i->next->prev = i->prev;
			i->next = i->prev;
			i->prev = i->next->prev;
			i->next->prev = i;
			if (i->prev != '\0')
				i->prev->next = i;
			else
				*list = i;
			print_list(*list);
		}
		i = i->next;
	}
}
