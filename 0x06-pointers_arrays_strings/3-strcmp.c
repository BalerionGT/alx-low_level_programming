#include "main.h"
/**
 * _strcmp - Compare two strings.
 *
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 *
 * Return: Integer value.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
