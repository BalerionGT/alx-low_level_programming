#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - check the code
 * @b: the string of 0 and 1 we want to convert
 *
 * Return: 0 if null or b contain other than 0 & 1 , converted int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, s = 0, j, p = 1, k = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[k] != '\0')
	{
		k++;
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (i == 0)
		{
			s += b[k - i - 1] - '0';
		}
		else
		{
			p = 1;
			for (j = 1; j <= i; j++)
			{
				p *= 2;
			}
		s += ((b[k - i - 1]) - '0') * p;
		}
		i++;
	}
	return (s);
}
