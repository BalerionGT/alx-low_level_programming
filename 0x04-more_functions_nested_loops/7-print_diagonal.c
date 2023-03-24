#include "main.h"

/**
 * print_diagonal - check the code
 * @n: The number of caracter \ we want to print.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\\');
		for (i = 1 ; i <= n ; i++)
		{
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
