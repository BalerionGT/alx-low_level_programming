#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - check the code
 * @x: the integer we want to calculate the power
 * @y: the power
 * Return: x power y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else
	{
		if (y < 0)
		{
			return (-1);
		}
		else
		{
			return (x * _pow_recursion(x, y - 1));
		}
	}
}
