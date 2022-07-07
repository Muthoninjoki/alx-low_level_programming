#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_strings - check description
* Description:function that prints strings followed by new line
* @separator:separator
* @n:no of strings
* Return:0
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list vl;
unsigned int i;
char *s;

va_start(vl, n);
for (i = 0; i < n; i++)
{
s = va_arg(vl, char*);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");
va_end(vl);
}
