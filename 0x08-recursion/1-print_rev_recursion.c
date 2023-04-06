#include "main.h"

/**
 * _print_rev_recursion - check the code
 * @s: The string we want to print in reverse order
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
