#include "main.h"

/**
 * flip_bits - check the code
 * @n: the begining number
 * @m: the second one
 *
 * Return: how many bits are changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int k;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		k = x >> i;
		if (k & 1)
			j++;
	}
	return (j);
}
