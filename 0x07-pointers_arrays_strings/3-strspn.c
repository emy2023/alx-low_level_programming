#include "main.h"
/**
 * _strspn - get the lenght of prefix substring
 *@s: segment that be scanned
 *@accept: list of character to match
 *Return: the number of bytes of the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (i);
}
