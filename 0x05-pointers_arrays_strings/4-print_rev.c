#include "main.h"

/**
 * print_rev - check the code
 * @s: The caracter we want to print in reverse
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i != 0)
	{
		_putchar(*(s + (i - 1)));
		i--;
	}
	_putchar('\n');
}
