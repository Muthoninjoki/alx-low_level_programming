#include "main.h"

/**
 * rot13 - check description
 * Description: function that encodes a string
 * @str:string
 * Return: 0
 */

char *rot13(char *str)
{
int i, j;

char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (str[i] == a[j])
{
str[i] = b[j];
break;
}
}
}
return (str);
}
