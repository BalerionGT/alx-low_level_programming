#include "main.h"

/**
 * print_sign - check the code.
 * @n: is the number we want to determinate his sign
 * Return: 1 if n positive 0 if null and -1 if it is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
}
