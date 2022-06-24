#include "main.h"

/**
 * _strlen - check description
 * Description: returns the length of a string
 * @s:input
 * Return: 0
 */

int _strlen(char *s)
{
int n, m;
m = 0;
for (n = 0; s[n] != '\0'; n++)
m++;

return (m);
}
