#include "main.h"
/**
 * print_diagsums - prints sum of two diagonals
 * @a: 2D array
 * @size: size of the array
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[(i + 1) * size - i - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}
