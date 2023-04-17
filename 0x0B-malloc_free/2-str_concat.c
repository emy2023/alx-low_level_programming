#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two string
 * @s1: fisrt string input
 * @s2: second string input
 * Return: ponter to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int lenght1 = 0;
	int lenght2 = 0;
	int i, j;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		lenght1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		lenght2++;
	}
	newstr = (char *)malloc((lenght1 + lenght2 + 1) * sizeof(char));
	if (newstr == 0)
	{
		return (0);
	}
	for (i = 0; i < lenght1; i++)
	{
		newstr[i] = s1[i];
	}
	for (j = 0; j < lenght2; j++)
	{
		newstr[i] = s2[j];
		i++;
	}
	newstr[lenght1 + lenght2] = '\0';
	return (newstr);
}
