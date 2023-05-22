#include <stdlib.h>
#include "dog.h"
#include <stddef.h>
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
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
