#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function search for integer
 * @array: input array
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: the index of the first element found and  for else
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);

	}
	return (-1);
}
