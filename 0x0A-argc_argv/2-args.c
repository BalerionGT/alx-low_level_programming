#include <stdio.h>

/**
 * main - check the code
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
