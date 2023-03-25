#include "main.h"
#include <stdio.h>
/**
 * main - print numbers from 1 to 100
 *
 * Return : Always 0(Succes)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d ", i);
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
		printf(" FizzBuzz ");
		}
	}
	printf("\n");
	return (0);
}
