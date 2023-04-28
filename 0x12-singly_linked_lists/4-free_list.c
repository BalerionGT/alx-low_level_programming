#include <stdlib.h>
#include "lists.h"

/**
 * free_list -check code
 * @head: the lis we want to free
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *last;

	while (head)
	{
		last = head->next;
		free(head->str);
		free(head);
		head = last;
	}
}
