#include <unistd.h>
#include "main.h"
/**
 * _islower - check the code
 * @c: The character to determinate if it is lower or not.
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
