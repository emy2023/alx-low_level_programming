#include "main.h"
/**
 * more_numbers - prints 10 times number from 0 to 14
 * Return: Always 0(Succes)
 */
void more_numbers(void)
{
	int i, j, num;

	for (i = 0 ; i <= 9; i++)
	{
		for (j = 0; j <= 14;)
		{
			num = j;
		if (j > 9)
		{
			_putchar(49);
			num = j % 10;
		}
		_putchar(num + '0');
		j++;
		}
		_putchar('\n');
	}
}
