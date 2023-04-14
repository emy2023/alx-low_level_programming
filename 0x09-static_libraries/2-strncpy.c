#include "main.h"
/**
 * _strncpy - function that copy a string
 * @dest: first input character
 * @src: second input charcter
 * @n: number of byte to copy
 * Return: the new value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int src_len = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		src_len++;
	}
	if (n < src_len)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	else
	{
		for (i = 0; i < src_len; i++)
		{
			dest[i] = src[i];
		}
		for (; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
