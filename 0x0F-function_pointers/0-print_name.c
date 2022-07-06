#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_name - check description
* Description:a function that prints a name
* @name:name
* @f:function
* Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{

if (name == NULL || f == NULL)
{
return;
}

(*f)(name);
}
