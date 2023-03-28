#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: The first int.
 * @b: The second one.
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
