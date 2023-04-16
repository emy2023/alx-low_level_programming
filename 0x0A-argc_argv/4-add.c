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
	int i = 1;
	int sum = 0;
	char *c;

	for (; i <argc; i++)
	{
		c = argv[i];
		if (*c < '0' || *c > '9')
		{
			printf("Error\n");
				return (1);
		}

		else
		{
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
	
}
