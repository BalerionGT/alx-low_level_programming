#include "lists.h"
/**
 * print_listint - check the code
 * @h: a linked list
 *
 * Return: the number of nodes in h
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
