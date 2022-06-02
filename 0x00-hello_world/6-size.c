#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int integerType;
char charType;
float floatType;
long int longintType;
long long int longlongintType;

printf("Size of char is: %ld byte(s)\n", sizeof(charType));
printf("Size of int is: %ld byte(s)\n", sizeof(integerType));
printf("Size of long int is: %ld byte(s)\n", sizeof(longintType));
printf("Size of long long int is: %ld byte(s)\n", sizeof(longlongintType));
printf("Size of float is: %ld byte(s)\n", sizeof(floatType));

return (0);
}
