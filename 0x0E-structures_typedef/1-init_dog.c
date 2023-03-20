#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initilaizes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: initializing name
 * @age: initializing age
 * @owner: initializing owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
