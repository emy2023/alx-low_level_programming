#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - function prints name
 *@name: name to print
 *@f: pointer to a function
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}