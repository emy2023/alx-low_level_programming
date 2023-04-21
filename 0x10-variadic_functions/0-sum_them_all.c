#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function return sum of all parametres
 * @n: number of parametres
 * @...: the input parametres
 *
 * Return: the sum of arguments, 0 for else n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
