#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - check description
* Description: function that frees a 2 dimesional grid
* @grid:input
* @height:height
* Return: void
*/

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
