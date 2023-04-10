#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings, up to n characters from src.
 * @dest: the destination string.
 * @src: the source string to be appended to dest.
 * @n: the maximum number of characters to be appended.
 *
 * Return: pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0' && n-- > 0)
	{
		*p++ = *src++;
	}

	*p = '\0';

	return (dest);
}
