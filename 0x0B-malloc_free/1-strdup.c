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
	c = (char *) malloc((i + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i ; j++)
		{
			c[j] = str[j];
		}
		c[i] = '\0';
		return (c);
	}
	free(c);
}
