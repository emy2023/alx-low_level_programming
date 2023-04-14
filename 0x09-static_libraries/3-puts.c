#include "main.h"
/**
 * _puts - prints string followed by new lign
 * @str: parametre to print
 * return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
