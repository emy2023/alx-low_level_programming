#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: is the number of printed charecter
 * Return: Always 0(succes)
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
		_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
