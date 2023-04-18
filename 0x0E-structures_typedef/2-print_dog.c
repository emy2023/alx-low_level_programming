#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function print a struct dog
 * @d: pointer to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("Name: %s\n", (d->name != 0) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != 0) ? d->owner : "(nil)");
	}
}
