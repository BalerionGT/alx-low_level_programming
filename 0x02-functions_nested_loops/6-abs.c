#include "main.h"
#include <stdio.h>

/**
 * _abs - check the code
 * @n: a number we want to calculate his absolute number
 * Return: n if the number is positive -n if the number is negative
 */
int _abs(int n)
{
	if (n <= 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
