#include "main.h"
/**
 * strcmp - function that compares two strings
 * @s1: first input character
 * @s2: second input character
 *
 * Return: 0 if equal; negative integer for less; positive integer for greater
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i == j)
	{
		return (0);
	}
	else
	{
		return (i - j);
	}
}
