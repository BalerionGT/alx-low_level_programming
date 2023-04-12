#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code.
 * @str: the string we want to copy
 * Return: a pointer
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *c;

	while (str[i] != '\0')
	{
		i++;
	}
	c = malloc((i + 1) * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] ; j++)
	{
		c[j] = str[j];
	}
	return (c);
}
