#include "main.h"
#include <stdlib.h>
/**
 * puts2 - check the code
 * @str: The string we want to print the half
 * Return: Nothing.
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; *(str + i) != '\0' ; i++)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
