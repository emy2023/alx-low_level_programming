#include "main.h"
/**
 *_isdigit - fonction return if the parametre is digit or not
 *@c: parametre to check
 *Return: if the parametre is digit return 1 else it return 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
