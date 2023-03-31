#include "main.h"
/**
 * cap_string - capitalizes all words.
 * @a: input characters.
 *
 * Return: The new value of characters.
 */
char *cap_string(char *a)
{
	int i = 0;
	int cap_next = 1;

	while (a[i] != '\0')
	{
		if ((cap_next == 1 && a[i] >= 'a') && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		cap_next = 0;
		if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n' ||
		a[i] == ',' || a[i] == ';' || a[i] == '.' || a[i] == '!' ||
		a[i] == '?' || a[i] == '"' || a[i] == '(' || a[i] == ')' ||
		a[i] == '{' || a[i] == '}')
		{
			cap_next = 1;
		}
		i++;
	}
	return (a);
}
