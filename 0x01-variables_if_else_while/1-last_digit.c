#include <stdlib.h>
#include <time.h>
#include <stdio>
/**
 * main - Entry point
 *
 * Return : Always 0(Succes)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;
	printf("last digit of %d")
	return (0);
}
