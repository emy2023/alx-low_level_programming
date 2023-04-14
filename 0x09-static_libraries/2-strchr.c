#include "main.h"
/**
 *_strchr - locate a charcter in string
 *@s: string to be scanned
 *@c: the character to be found
 *Return: a pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	while (*s != '0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (0);
	}
}
