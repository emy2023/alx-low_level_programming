#include "main.h"
/**
 * puts_half - function should print the second half of the string
 * @str: input character
 * returns: nothing
 */
void puts_half(char *str)
{
	int i, lent = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		lent++;
	}
	for (i = ((lent - (lent % 2)) / 2) ; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
