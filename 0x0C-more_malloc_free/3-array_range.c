#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* array_range - check description
* Description: function that creates an array of integers
* @min:integer
* @max:integer
* Return: pointer to the newly created array
*/

int *array_range(int min, int max)
{
int *m;
int i, p = 0;

if (min > max)
{
return (NULL);
}
m = malloc(sizeof(*m) * ((max - min) + 1));

if (m != NULL)
{
for (i = min; i <= max; i++)
{
m[p] = i;
p++;
}
return (m);
}
else
return (NULL);
}
