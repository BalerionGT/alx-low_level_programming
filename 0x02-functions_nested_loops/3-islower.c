#include "main.h"

/**
 * _islower - check the code.
 * @c: is the ascii code of the caracter we enter
 * Return: 1 if it is a lowercase 0 otherwise.
 */
int _islower(int c)
{
	if (c > 96 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
