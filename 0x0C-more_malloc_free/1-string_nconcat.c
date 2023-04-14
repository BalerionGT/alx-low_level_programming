#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code
 * @s1: the first srting
 * @s2: the second string
 * @n: the number of caracters from second string
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k;
	char *p;

	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
	}
	if (n >= j)
	{
		p = malloc((i + j + 1) * sizeof(char));
		for (k = 0; k < i ; k++)
		{
			p[k] = s1[k];
		}
		for (k = i; k < i + j ; k++)
		{
			p[k] = s2[k - i];
		}
		p[i + j ] = '\0';
	}
	else
	{
		p = malloc((i + n + 1) * sizeof(char));
		for (k = 0; k < i ; k++)
		{
			p[k] = s1[k];
		}
		for (k = i; k < i + n ; k++)
		{
			p[k] = s2[k - i];
		}
		p[i + n ] = '\0';
	}
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
