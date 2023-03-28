#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * rev_string - check the code
 * @s: The string we want to reversz
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char *p;
	int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	p = (char *)malloc((i + 1) * sizeof(char));
	*(p + i) = '\0';
	while (i != 0)
	{
		*(p + j) = *(s + i - 1);
		i--;
		j++;
	}
	for (i = 0; i <= j; i++)
	{
		*(s + i) = *(p + i);
	}
	free(p);
}
