#include "lists.h"

/**
 * sum_listint - check code
 * @head: the begening of the linked list
 *
 * Return: the result sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *t = head;

	while (t)
	{
		s += t->n;
		t = t->next;
	}
	return (s);
}
