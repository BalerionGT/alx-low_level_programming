#include "main.h"
#include <stdio.h>

/**
 * factorial - check the code
 * @n: The integer we want to calculate the factoriel of
 * Return: the factoriel of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		if (n < 0)
		{
			return (-1);
		}
		else
		{
			return  (n * factorial(n - 1));
		}
	}
}
