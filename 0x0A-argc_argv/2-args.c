#include <stdio.h>
#include "main.h"

/**
 * main - check description
 * Description: prints all arguments it receives
 * @argc:input
 * @argv:input
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
