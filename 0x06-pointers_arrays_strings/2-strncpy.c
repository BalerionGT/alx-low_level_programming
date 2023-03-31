#include "main.h"
#include <stdio.h>
/**
 * _strncpy - Copy a string.
 *
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to destination string.
 */
char *_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

