#include "lists.h"

/**
 * insert_nodeint_at_index - check code
 * @head: pointer to the begining of the linked list
 * @idx: index where the node is added
 * @n: data we want to insert in the node
 *
 * Return: pointer towards to new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *m;
	listint_t *t = *head;

	m = malloc(sizeof(listint_t));
	if (!m || !head)
	{
		return (NULL);
	}
	m->n = n;
	m->next = NULL;
	if (idx == 0)
	{
		m->next = *head;
		*head = m;
		return (m);
	}
	for (j = 0; t && j < idx; j++)
	{
		if (j == idx - 1)
		{
			m->next = t->next;
			t->next = m;
			return (m);
		}
		else
			t = t->next;
	}
	return (NULL);
}
