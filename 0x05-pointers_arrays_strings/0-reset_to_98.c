#include "main.h"

/**
 * reset_to_98 - reset to 98
 * Description: takes a pointer to an int as parameter
 * @n: input
 * Return: 0
 */

void reset_to_98(int *n)
{

int *m;
int p = 98;

m = &p;
*n = *m;
}

