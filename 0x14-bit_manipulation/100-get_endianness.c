#include "main.h"

/**
 * get_endianness - check the code
 * Return: 0 big 1 small
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *a = (char *) &j;

	return (*a);
}
