#include "main.h"

/**
 * set_bit - check the code
 * @n: pointer toward the number we want to change
 * @index: index of the bit
 *
 * Return: 1 success -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index | *n);
	return (1);
}
