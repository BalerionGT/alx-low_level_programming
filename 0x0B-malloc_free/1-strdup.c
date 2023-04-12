#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 *
 * Return: a pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	char *c;

	while (str[i] != '\0')
	{
		i++;
	}
	*c = (char) malloc((i + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		*c = *str;
		return (c);
	}
	free (c);
}
