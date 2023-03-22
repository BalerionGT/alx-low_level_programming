#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar('0' + i * j / 10);
			_putchar('0' + i * j % 10);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
