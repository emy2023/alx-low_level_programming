#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elments of the array
 * return: 0
 */
void reverse_array(int *a, int n)
{
	int tmp, i = 0;
	int j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
