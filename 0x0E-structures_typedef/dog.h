#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - new type of data for a dog
* @name:name
* @age:age
* @owner:owner
*/

typedef struct dog my_dog;
{
char *name;
float age;
char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);

#endif

