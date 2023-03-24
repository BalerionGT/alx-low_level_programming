#include "main.h"

/**
 * print_line - check the code
 * @n: The number of caracter _ we want to print.
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= n ; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
