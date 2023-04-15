#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: number of argument
 * @argv: array of arguments
 * Rturn: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
