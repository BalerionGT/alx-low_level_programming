#include "main.h"
/**
 * jack_bauer - check the code
 *
 * Return: return nothing.
 */
void jack_bauer(void)
{
	int i, j, k, l = 0;

	for (i = 0; i <= 23; i++)
	{
		k = 0;
		if (i % 10 == 0 && i != 0)
		{
			l++;
		}
		for (j = 0; j < 60; j++)
		{
			_putchar('0' + l);
			_putchar('0' + i % 10);
			_putchar(':');
			if (j % 10 == 0 && j != 0)
			{
				k++;
			}
			_putchar('0' + k);
			_putchar('0' + j % 10);
			_putchar('\n');
		}
	}
}
