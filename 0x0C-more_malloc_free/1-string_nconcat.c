#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
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
		p = malloc((i + j) * sizeof(char));
	}
	else
	{
		p = malloc((i + n) * sizeof(char));
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < 


