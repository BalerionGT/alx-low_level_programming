#inlude "main.h"

/**
 * get_bit - check the code
 * @n: number we searching for
 * @index: index of bit
 *
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int v;

	if (index > 63)
	{
		return (-1);
	}
	v = (n >> index) & 1;
	return (v);
}
