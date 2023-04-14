#include "main.h"
/**
* _isalpha - check for lowercase or uppercase character
*@c: the character to check
* Return: 1 for lowercase and uppercase character and 0 for else
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
