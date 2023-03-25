#include "main.h"
/**
 * print_diagonal - print diagonal lign
 * @n: number of the printed character
 * Return: Always 0(Succes)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			/*_putchar(92);*/
			for (j = 1; j <= i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
		else
		{
			_putchar('\n');
		}
}
