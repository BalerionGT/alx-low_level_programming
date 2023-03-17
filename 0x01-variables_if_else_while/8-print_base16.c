#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 103)
	{
		if (i == 57)
		{
			putchar(i);
			i = i + 40;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
