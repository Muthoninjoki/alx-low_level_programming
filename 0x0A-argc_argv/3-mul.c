#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - check description
 * Description: program that multiplies two numbers
 * @argc:input
 * @argv:input
 * Return:0
 */

int main(int argc, char *argv[])
{
int i = 0;
int n, m;

if (argc == 3)
{
n = atoi(argv[1]);
m = atoi(argv[2]);
i = n *m;
printf("%d\n", i);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}

