#include "dog.h"

/**
* init_dog - check description
* Description: a function that initializes a variable of type
* struct dog
* @d:dog
* @name:name
* @age:age
* @owner:owner
* Return:void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != '\0')
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
