#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check the code
 * @n: the number we want to determinate if prime or not.
 * Return: 1 prime, 0  not
 */
int is_prime_number(int n)
{
	int i = n;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	else
	{
		return ( is_prime_number(n - 1) == 1 && i % n -1 != 1);
	}
}
