#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check the code
 * @n: the number we want to determinate if prime or not.
 * Return: 1 prime, 0  not
 */
int is_prime_number(int n)
{
	int i;

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
		for (i = 2; i < n ; i++)
		{
			if (is_prime_number(i) == 1 && n % i == 0)
			{
				return (0);
				break;
			}
		}
	}
	return (1);
}
