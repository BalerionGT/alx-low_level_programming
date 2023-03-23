#include "main.h"

/**
 * positive_or_negative - Entry point
 * @n: an integer we want to now his sign
 * Return: Nothing
 */
/* more headers goes there */

/* betty style doc for function main goes there */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		else
		{
			printf("%d is zero\n", n);
		}
	}
}
