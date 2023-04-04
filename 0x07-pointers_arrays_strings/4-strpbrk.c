#include "main.h"
/**
 * _strpbrk - serches for string for any set bytes
 * @s : the string to be scaned
 * @accept: the string contaning the characters to match
 * Return: pointer to the first maching characters
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
