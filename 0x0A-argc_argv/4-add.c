#include <stdio.h>
#include<stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of argument
 * @argv: array of argument
 * Return: the addition
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
		if (argv[i][j] < '0' || argv[i][j] > '9')
		{
			printf("Error\n");
				return (1);
		}
		j++;
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
