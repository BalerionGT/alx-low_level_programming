#include "main.h"
#include <stdio.h>

/**
 * _memcpy - check the body
 * @dest: destination
 * @src: source
 * @n: the number of caracter
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
