#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - check the code
 * @h: The linked list we want to calculate the number of the nodes
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}
