#include "dog.h"

/**
* init_dog - check description
* Description: a function that initializes a variable of type
* struct dog
* @d:dog
* @name:name
* @age:age
* @owner:owner
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
