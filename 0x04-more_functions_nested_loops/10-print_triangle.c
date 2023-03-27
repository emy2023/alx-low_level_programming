#include "main.h"
/**
 * print_triangle -  function that prints a triangle, followed by a new line
 * @size: is the size of the triangle
 * Return: Always 0(succes)
 */
void print_triangle(int size)
{
	int i, j, n;

	if (size > 0)
	{
	for (n = 1 ; n <= size ; n++)
	{
		for (i = 1 ; i <= size - n ; i++)
	{
		_putchar(' ');
	}
		for (j = 1 ; j <= n ; j++)
	{
		_putchar(35);
	}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
