#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_numbers - check description
* Description:function that prints numbers followed by new line
* @separator:separator
* @n:no of int
* Return:0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list vl;
unsigned int i;

va_start(vl, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(vl, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(vl);
}
