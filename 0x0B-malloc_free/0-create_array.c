#include "main.h"
#include <stdlib.h>
/**
 * *create_array - create an array of character
 * and intializes by char
 * @size: size of array
 * @c: the character to intialize
 * Return: pointer the array intialized or null
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (0);
	}
	if (arr == 0)
	{
		return (0);
	}
	while (size--)
	{
		arr[size] = c;
	}
	return (arr);
}
