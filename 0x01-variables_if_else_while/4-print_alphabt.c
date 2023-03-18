#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char l;

	while (l <= 'z')
	{
		if (l != 'q' && l != 'e')
		{
			putchar(l);
		}
		l++;
	}
	putchar('\n');
	return (0);
}
