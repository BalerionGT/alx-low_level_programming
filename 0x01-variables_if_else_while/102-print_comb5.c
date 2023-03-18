#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 47, j, k, l;

	while (i < 57)
	{
		i++;
		j = 47;
		while (j < i - 1)
		{
			j++;
			k = 47;
			while (k < 57)
			{
				k++;
				if (k == 48 || k == 57)
				{
					l = j;
				}
				else
				{
					l = 47;
				}
				while (l < 57)
				{
					l++;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 || j != 56 || k != 57 || l != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
