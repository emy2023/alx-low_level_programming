#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function free dogs
 * @d: pointer to dog structure to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
	}
}
