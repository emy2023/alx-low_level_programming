#include "main.h"
/**
* times_table - print time table
*/
void times_table(void)
{
	int lin, col, num;

	for (lin = 0; lin <= 9 ; lin++)
	{
		for (col = 0; col <= 9 ; col++)
		{
			num = lin * col;
			if (col == 0)
			{
			_putchar('0');
			}
			else if (num < 10)
			{
			_putchar(' ');
			_putchar(num + '0');
			}
			else
			{
			_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
			}
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
