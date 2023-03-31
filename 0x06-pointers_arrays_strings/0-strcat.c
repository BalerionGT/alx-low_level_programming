#include "main.h"
#include <stdio.h>

/**
 * _strcat - check the code
 * @dest: String destination.
 * @src: String source.
 * Return: String.
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
