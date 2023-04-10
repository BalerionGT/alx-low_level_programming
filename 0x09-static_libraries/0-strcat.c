#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: the destination string.
 * @src: the source string to be appended to dest.
 *
 * Return: pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0')
	{
		*p++ = *src++;
	}

	*p = '\0';

	return (dest);
}
