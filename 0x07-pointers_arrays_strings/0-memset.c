#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - check the code
 * @s: The space in the memory we want to fill
 * @b: The caracter we need to fill with
 * @n: The number of cases we want to fill
 * Return: Nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
