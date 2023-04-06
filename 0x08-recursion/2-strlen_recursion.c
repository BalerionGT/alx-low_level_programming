#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code
 * @s: The string we want to calculatte the length
 * Return: The length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
