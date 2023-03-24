#include "main.h"

/**
 * print_diagonal - check the code
 * @n: The number of caracter \ we want to print.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\\');
		_putchar('\n');
		for (i = 2 ; i <= n ; i++)
		{
			for (j = 2 ; j <= i ; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
