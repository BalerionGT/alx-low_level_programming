#include "lists.h"

/**
 * add_nodeint_end - check code
 * @head: pointer to the beginig of the list
 * @n: data we want to insert in new node
 *
 * Return: pointer to a new node or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *m;
	listint_t *t = *head;

	m = malloc(sizeof(listint_t));
	if (!m)
	{
		return (NULL);
	}
	m->n = n;
	m->next = NULL;
	if (*head == NULL)
	{
		*head = m;
		return (m);
	}
	while (t->next)
	{
		t = t->next;
	}
	t->next = m;
	return (m);
}
