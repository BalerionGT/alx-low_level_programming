#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - check the code
 * @str: a string
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index = length / 2;

	if (length % 2 == 1)
	{
		start_index++;
	}

	printf("%s\n", str + start_index);
}
