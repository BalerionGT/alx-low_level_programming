#include <stdio.h>
#include "main.h"

/**
 * print_binary - check the code
 * @n: the number we want to pritn in binary
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int v;

	for (i = 63; i >= 0 ; i--)
	{
		v = n >> i;
		if (v & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
