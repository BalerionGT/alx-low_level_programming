#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code.
 * @s: The string we want to determinate the length of it.
 * Return: The length of the string s.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
