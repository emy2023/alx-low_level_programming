#include "main.h"
/**
 *factorial - function returns a factorial of given number
 *@n: unput number
 *Return: the factorial of the given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		if (n == 0)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
}
