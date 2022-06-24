#include <stdio.h>
#include "main.h"
#include <stdlib.h>



/**
* main - check description
* Description:  program that adds positive numbers
* @argc: input
* @argv: input
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < i; j++)
		{
			char curr_char;

			curr_char = argv[i][j];

			if (curr_char == '\0')
			{
				break;
			}

			if (curr_char < '0' || curr_char > '9')
			{
				printf("Error\n");

				return (1);
			}
		}

		/* Current number is valid */

		sum += atoi(argv[i]);

	}
	printf("%d\n", sum);

	return (0);
}

