#include "main.h"

/**
 * print_last_digit - check the code.
 * @n: the number that we want to return the last digit of it.
 * Return: the last digit of a number.
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (n > 0)
	{
		_putchar(48 + m);
		return (m);
	}
	else
	{
		_putchar(48 - m);
		return (-m);
	}
}
