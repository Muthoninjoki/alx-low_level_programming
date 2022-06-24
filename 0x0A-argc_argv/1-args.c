#include <stdio.h>
#include "main.h"

/**
 * main - check description
 * Description:print number of arguments passed into it
 * @argc:input
 * @argv:input
 * Return:0
 */

int main(int argc, char *argv[])
{
int i;
printf("%d\n", argc);
for (i = 0; i < argc; i++)
{
printf("%s", argv[i]);
}
return (0);
}
