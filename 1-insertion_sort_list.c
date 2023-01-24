#include "sort.h"

/**
 * insertion_sort_list - sorts doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: list to sort
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *temp = NULL;

	while (current)
	{
		if (current->prev && current->n < current->prev->n)
		{
			temp = current->prev;
			while (temp && current->n < temp->n)
				temp = temp->prev;
			if (temp)
			{
				current->prev->next = current->next;
				if (current->next)
					current->next->prev = current->prev;
				current->prev = temp;
				current->next = temp->next;
				temp->next->prev = current;
				temp->next = current;
			}
			else
			{
				current->prev->next = current->next;
				if (current->next)
					current->next->prev = current->prev;
				current->prev = NULL;
				current->next = *list;
				(*list)->prev = current;
				*list = current;
			}
			print_list(*list);
		}
		current = current->next;
	}
}
