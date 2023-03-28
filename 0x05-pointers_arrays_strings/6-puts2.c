#include "main.h"

/**
 * puts2 - check the code
 * @str: The string we want to print the half
 * Return: Nothing.
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
		i++;
	}
	_putchar('\n');
}
