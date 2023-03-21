#include "main.h"
/**
 * _isalpha - check the code.
 * @c: ASCII code of the caracter
 * Return: Always 1 if it is upper or lower case 0 othewise.
 */
int _isalpha(int c)
{
	if ((c > 64 && c <= 90) || (c > 96 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
