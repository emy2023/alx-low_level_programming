#include <stdio.h>
/**
 * main - print numbers from 1 to 100 folowed by new line
 * numbers are multiples of 3 print Fizz
 * numbers are multiples of 5 print Buzz
 * numbers are multiples of 3 and 5 print FizzBuzz
 *
 * Return: Always 0(Succes)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
		printf("FizzBuzz");
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
