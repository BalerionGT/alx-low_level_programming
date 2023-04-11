#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 success 1 fail
 */
int main(int argc, char **argv)
{
	if (argc - 1 == 2)
	{
		printf("%d", atoi(argv[1]) * atoi(argv[2]));
		printf("\n");
		return (0);
	}
	else
	{
		printf("Error");
		printf("\n");
		return (1);
	}
}
