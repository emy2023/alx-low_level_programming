#include "main.h"
/**
 * _strstr - find the first occurence of substring
 * @haystack: the string to be check
 * @needle: string to be serched
 * Return: the pointer to the beginning of located string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[j + i])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}

	return (0);
}
