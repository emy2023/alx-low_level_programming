#include "main.h"
/**
 * _memset - fills the memory with a constant byte
 * @s: pointer to the adress memory area
 * @b: constant byte to add
 * @n: number of memory area to be changed
 * Return: the pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int unsigned i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
