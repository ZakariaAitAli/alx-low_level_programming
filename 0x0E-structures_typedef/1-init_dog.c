#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: dog variable
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
