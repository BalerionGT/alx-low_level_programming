#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: doesn't return anything.
 */
void print_alphabet_x10(void)
{
	int i;

	for(i = 0; i < 11 ; i++)
	{
		print_alphabet();
		_putchar('\n');
	}
	_putchar('\n');
}
