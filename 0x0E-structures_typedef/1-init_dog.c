#include "dog.h"
/**
 * init_dog - intialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name of struct dog
 * @age: to intialize of struct dog
 * @owner: owner to initialize of struct dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
