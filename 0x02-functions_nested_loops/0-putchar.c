#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i[8] = "_putchar";

	for (int j = 0; j < 8 ; j++)
	{
		putchar(i[j]);
	}
	putchar('\n');
	return (0);
}
