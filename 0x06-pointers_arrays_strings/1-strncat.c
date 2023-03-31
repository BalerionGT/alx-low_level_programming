#include "main.h"
#include <stdio.h>

/**
 * *_strncat - check the code
 * @dest: String destination
 * @src: String source
 * @n: number of caracters
 * Return: String.
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
