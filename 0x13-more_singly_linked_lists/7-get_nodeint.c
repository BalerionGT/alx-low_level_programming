#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 * @head: the node of the beginig of the list
 * @index: index of node we want to return
 *
 * Return: pointer towrd the node we are looking for or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *t = head;

	while (t && n <  index)
	{
		t = t->next;
		n++;
	}
	return (t ? t : NULL);
}
