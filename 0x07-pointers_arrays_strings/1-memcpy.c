#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: pointer to destination area
 * @src: pointer to source data to be copied
 * @n: number of charater to be copied
 * Return: the destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
