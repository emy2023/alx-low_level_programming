#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 * Return: Always 0(succes)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57;)
	{
		if (i != 50 && i != 52)
		{
		_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
