#include "main.h"

/**
* binary_to_unit - check description
* Description:converts binary no to an unsigned int
* @b: binary no
* Return:converted no
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int d = 0;
int str_len = 0, base = 1;

if (!check_valid_string(b))
return (0);

while (b[str_len] != '\0')
str_len++;

while (str_len)
{
d += ((b[str_len - 1] - '0') * base);
base *= 2;
str_len--;
}
return (d);
}

/**
* check_valid_string - check description
* Description: checks if string has ones and zeros
* @b:string
* Return:1 if valid, otherwise 0
*/

int check_valid_string(const char *b)
{
if (b == NULL)
return (0);

while (*b)
{
if (*b != '1' && *b != '0')
return (0);
b++;
}
return (1);
}

