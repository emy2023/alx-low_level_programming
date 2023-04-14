#include "main.h"
/**
* _strcat - function appends the src string to the dest string
* @dest: first input character
* @src: second input character
* Return: the new value of dest
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int destlen = 0;
	int srclen = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destlen++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srclen++;
	}
	for (i = 0; i <= srclen; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);
}
