#include "main.h"

/**
 * positive_or_negative - test the number if it is positive or négative
 *@i: the number to check
 *Return: Always 0(succes)
 */
void positive_or_negative(int i)
{
	if (i >= 0)
	{
		if (i == 0)
		{
			printf("%d is zero\n", i);
		}
		else 
		{
		printf("%d is positive\n", i);
		}
	}
	else 
	{
	printf("%d is negative\n", i);
	}
}
