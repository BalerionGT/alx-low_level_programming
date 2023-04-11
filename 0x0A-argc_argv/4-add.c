#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 1 fail, 0 sucess
 */
int main(int argc, char **argv)
{
	int s = 0, i, j = 1;

	if (argc - 1 == 0)
	{
		printf("0\n");
		j = 0;
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0 && i != 0)
			{
				j = 0;
				printf("Error");
				printf("\n");
				break;
				return (1);
			}
			else
			{
				s = s + atoi(argv[i]);
			}
		}
	}
	if (j == 1)
	{
		printf("%d", s);
		printf("\n");
	}
	return (0);
}
