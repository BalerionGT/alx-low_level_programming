#include "main.h"

/**
 * print_times_table - check the code.
 * @n: The integer we want to find the multiplication table of it.
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i * j >= 100)
				{
					_putchar('0' + i * j / 100);
				}
				if (i * j >= 10)
				{
					_putchar('0' + (i * j / 10) % 10);
				}
				_putchar('0' + i * j % 10);
				if (j != n)
				{
					_putchar(',');
				}
				if (i * j < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				if (i * j < 100 && i * j >= 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (i * j >= 100)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
