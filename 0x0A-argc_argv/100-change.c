#include <stdlib.h>
#include <stdio.h>
/**
 * main - minimum number of coint change
 * @argc : number of argument
 * @argv : array of arguments
 * Return: 1 for error and O for 0 for else
 */
int main(int argc, char *argv[])
{
	int cents, num_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins = num_coins + cents / 25;
	cents = cents % 25;
	num_coins = num_coins + cents / 10;
	cents = cents % 10;
	num_coins = num_coins + cents / 5;
	cents = cents % 5;
	num_coins = num_coins + cents / 2;
	cents = cents % 2;
	num_coins = num_coins + cents;
	printf("%d\n", num_coins);
	return (0);
}
