#include "main.h"

/**
 * leet - check description
 * Description: function that encodes a string
 * @str:string
 * Return:0
 */

char *leet(char *str)
{
int i;
int j;
char leet[] = "ol_ea__t";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet[j] != '\0'; j++)
{
if (str[i] == leet[j] || str[i] == (leet[j] - 32))
{
	str[i] = j + '0';
}
}
}
return (str);
}
