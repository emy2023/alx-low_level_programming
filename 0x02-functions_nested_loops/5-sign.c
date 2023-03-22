#include "main.h"
/**
* print_sign - check the number if it is positive or negative or zero
*@n: the character to check
* Return: 1 for positive number and -1 for negative and 0 for else
*/
int print_sign(int n)
{
if (n >= 0)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
	_putchar(43);
	return (1);
	}
}
else
{
	_putchar(45);
	return (-1);
}
}
