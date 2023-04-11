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
(void) (argv); /*ignore argv*/
	printf("%d", (argc - 1));
	printf("\n");
	return (0);
}
