#include "main.h"

/**
 * print_last_digit - check the code.
 * @n: the number that we want to return the last digit of it.
 * Return: the last digit of a number.
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar('0' +  n % 10);
		return (n % 10);
	}
	else
	{
		_putchar('0' + -n % 10);
		return (-n % 10);
	}
}