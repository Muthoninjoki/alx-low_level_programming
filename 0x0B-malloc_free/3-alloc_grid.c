#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - check description
* Description: function that returns a pointer to a 2D array
* of integers
* @width:width
* @height:height
* Return: Null on failure
*/

int **alloc_grid(int width, int height)
{
int i = 0, n;
int **array;

if (width == 0 || height == 0)
{
return (NULL);
}
array = (int **)malloc(sizeof(int *) * height);
if (array != NULL)
{
for (; i < height; i++)
{
array[i] = (int *) malloc(sizeof(int) * width);
if (array[i] != NULL)
{
for (n = 0; n < width; n++)
array[i][n] = 0;
}
else
{
while (i >= 0)
{
free(array[i]);
i--;
}
free(array);
return (NULL);
}
}
return (array);
}
else
{
return (NULL);
}
}

