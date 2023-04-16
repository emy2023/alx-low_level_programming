#include <stdio.h>
#include "main.h"
/**
 * atoi - convert string to integer
 * @s: input string
 * Return: the string converted to integer
 */
int atoi(char *s)
{
	int i, d, len, n, f, digit;

	i = 0;
	d = 0;
	len = 0;
	n = 0;
	digit = 0;
	f = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && f ==0)
	{
		if (s[i] == '-')
			d++;
		if (s[i] > '0' && s[i] < '9')
		{
			digit = s[i] - '0'
