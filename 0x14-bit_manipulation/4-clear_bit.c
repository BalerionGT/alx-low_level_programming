#include <stdio.h>
#include "main.h"

/**
 * clear_bit - check the code
 * @n: pointer to a number
 * @index: index of what is cleared
 *
 * Return: 1 sucess -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
