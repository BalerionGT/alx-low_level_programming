#include <stdio.h>
/**
 * main - check the code
 *
 * Return:Nothing.
 */
void main(void)
{
	int i;

	for (i = 1 ; i <= 99 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
				printf(" ");
			}
			else
			{
				if (i % 5 == 0)
				{
					printf("Buzz");
					printf(" ");
				}
				else
				{
					printf("%d", i);
					printf(" ");
				}
			}
		}
	}
	printf("Buzz");
}

