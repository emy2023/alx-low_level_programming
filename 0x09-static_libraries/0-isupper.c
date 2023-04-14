#include "main.h"
/**
* _isupper - check for lowercase or uppercase character
*@c: the character to check
* Return: 1 for lowercase and uppercase character and 0 for else
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
