#include "main.h"
/**
 * print_rev - print the reverse of string
 * @s: the input character
 * return: nothing
 */
void print_rev(char *s)
{
	int lent = 0;

	while (*s != '\0')
	{
		s++;
		lent++;
	}
	while (lent > 0)
	{
		s--;
		_putchar(*s);
		lent--;
	}
	_putchar('\n');
}
