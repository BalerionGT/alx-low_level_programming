#include "lists.h"

/**
 * add_nodeint - check code
 * @head: pointer towards first node
 * @n: data we want to put in a new node
 *
 * Return:a pointer towards the new node that was created or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *m;

	m = malloc(sizeof(listint_t));
	if (!m)
	{
		return (NULL);
	}
	m->n = n;
	m->next = *head;
	*head = m;
	return (m);
}
