#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: input parametre
 * retuns: noting
 */
void rev_string(char *s)
{
	char tab[1000];
	int lent = 0, i;


	while (s[lent] != '\0')
	{
		tab[lent] = s[lent];
		lent++;
	}
	for (i = 0; i < lent; i++)
	{
		s[i] = tab[lent - i - 1];
	}
}
