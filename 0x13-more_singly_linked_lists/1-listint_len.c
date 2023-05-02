#include "lists.h"
/**
 * listint_len - check the code
 * @h: linked list
 *
 * Return: the number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
