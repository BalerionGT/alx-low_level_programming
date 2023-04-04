/**
 * print_diagsums - check body
 * @a: The square matrix of integers.
 * @size: The size of the matrix.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - i - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
