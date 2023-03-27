#include "main.h"
/**
 * swap_int - fonction swaps the value of two integers
 * @a: first parametre
 * @b: second parametre
 * return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	 tmp = *a;
	 *a = *b;
	 *b = tmp;
}
