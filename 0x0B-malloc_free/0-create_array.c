#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - check code
 * @c: the caracter used to creat array of chars
 * @size: the size of the memory to print
 * Return: NULL or a pointer to caracter.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
