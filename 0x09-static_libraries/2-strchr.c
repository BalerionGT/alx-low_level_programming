#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to string to search in
 * @c: character to find
 *
 * Return: pointer to the first occurrence of c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
	{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
