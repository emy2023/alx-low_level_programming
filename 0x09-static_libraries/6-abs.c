#include "main.h"
/**
* _abs - provide the absolute value of integer
*@n: the character to check
* Return: absolute value of n
*/
int _abs(int n)
{
	if (n < 0)
	{
		int abs;

		abs = n * -1;
		return (abs);
	}
	return (n);
}
