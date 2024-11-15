#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes
 * @d: pointer
 * @age: age
 * @name: name
 * @owner: owener
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
