#include <stdio.h>

/**
 * leet - Encode string to 1337.
 * @str: The string to be encoded.
 *
 * Return: the encoded string.
 */

char *leet(char *str)
{
	int i, j;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "4433007711";

	for (i = 0 ; str[i]; i++)
	{
		for (j = 0; leet_chars[j]; j++)
		{
			if (str[i] == leet_chars[j])
			{
			str[i] = leet_nums[j];
			break;
			}		
		}
	}
	return (str);
}
