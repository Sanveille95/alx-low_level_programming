#include <stdlib.h>
#include "dog.h"
#include <stddef.h>
#include <string.h>
/**
  * init_dog - initializes a variable of type struct dog
  * @d: pointer to the address to initialize
  * @name: dog's name
  * @age: dog's age
  * @owner: owner's name
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = malloc(strlen(name) + 1);
		strcpy(d->name, name);
		d->owner = malloc(strlen(owner) + 1);
		strcpy(d->owner, owner);
		d->age = age;
	}
}
