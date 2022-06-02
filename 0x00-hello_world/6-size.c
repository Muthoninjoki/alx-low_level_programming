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

printf("Size of int is: %ld bytes\n", sizeof(integerType));
printf("Size of char is: %ld bytes\n", sizeof(charType));
printf("Size of float is: %ld bytes\n", sizeof(floatType));
printf("Size of long int is: %ld bytes\n", sizeof(longintType));
printf("Size of long long int is: %ld bytes\n", sizeof(longlongintType));

return (0);
}
