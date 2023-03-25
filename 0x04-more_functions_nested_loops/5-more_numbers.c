#include "main.h"
/**
 * more_numbers - prints 10 times number from 0 to 14
 * Return: Always 0(Succes)
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i <= 9; i++)
	{
		for (j = 0; j <= 14;)
		{
		if (j > 9)
		{
			_putchar(49);
		}
		_putchar(j);
		j++;
		}
		_putchar('\n');
	}
}
