#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
/* your code goes there */
if (last_digit > 5)
{
printf("last digit of %d is %d and is greater than 5\n");
}
else if (last_digit == 0);
{
printf("last digit of %d is %d and is 0\n");
}
else (last_digit < 6 && last_digit != 0);
{
printf("last digit of %d is %d and is less than 6 and not 0");
}
return (0);
}
