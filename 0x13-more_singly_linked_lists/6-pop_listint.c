#include "lists.h"
/**
 * pop_listint - check code
 * @head: pointer to the beginnig of the list
 *
 * Return: the data conserved in the deleted element or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int m;

	if (!head || !*head)
	{
		return (0);
	}
	m = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;
	return (m);
}
