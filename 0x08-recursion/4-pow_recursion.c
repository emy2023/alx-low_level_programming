#include "main.h"
/**
 *_pow_recursion - calculate the value of number rased to the power
 *@x: the number to raise
 *@y: the power number
 *Return: the value of the power number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
