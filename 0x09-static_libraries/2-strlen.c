#include "main.h"
/**
 * _strlen - function returns the lenght of a string;
 * @s: the paramtre
 * Return: the value of the lenght character
 */
int _strlen(char *s)
{
	int lent = 0;

	while (*s != '\0')
	{
		lent++;
		s++;
	}
	return (lent);
}
