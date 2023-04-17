#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - return a pointer newly allocated space in memory
 * @str: input string
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *newstr;
	int lenght = 0;
	int i;

	if (str == 0)
	{
		return (0);
	}
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	newstr = (char *)malloc((lenght + 1) * sizeof(char));
	if (newstr == 0)
	{
		return (0);
	}
	for (i = 0; i < lenght; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}
