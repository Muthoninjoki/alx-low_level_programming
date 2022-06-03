#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n,num[5];
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Enter number : ");
for(n = 0; n <= 4; n++)
{
scanf("%d", &num[n]);
}
printf("\n\nnumber you entered are : \n");
for(n = 0; n <= 4; n++)
{
printf("%d, ", num[n]);
}
/*negative*/
printf("\n\nNegative Number you entered are : \n");
for(n = 0; n <= 4; n++)
{
if(num[n]<0)
printf("%d, ", num[n]);
}
/*positive*/
printf("\n\nPositive Number you entered are : \n");
for(n = 0; n <= 4; n++)
{
if(num[n]>0)
printf("%d, ", num[n]);
}
return (0);
}
