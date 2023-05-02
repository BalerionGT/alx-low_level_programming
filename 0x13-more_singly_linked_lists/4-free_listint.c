#include "lists.h"

/**
 * free_listint - check code
 * @head: the list we want to free
 *
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = (head)->next;
		free(head);
		head = t;
	}
}
