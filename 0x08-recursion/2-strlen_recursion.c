#include "main.h"
/**
 *_strlen_recursion - fuction returns lenght of string
 *@s: the input string
 *Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
