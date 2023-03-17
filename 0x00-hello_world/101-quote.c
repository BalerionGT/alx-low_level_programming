#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int i;
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (i = 0; i < 58; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
	return (1);
}
