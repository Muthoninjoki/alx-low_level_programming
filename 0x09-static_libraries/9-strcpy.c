#include "main.h"

/**
 * _strcpy - check description
 * Description: copies the string
 * @dest:input
 * @src:input
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
