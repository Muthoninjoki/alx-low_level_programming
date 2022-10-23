#include <unistd.h>
/**
* _putchar - writes a char to stdout
* @c: char to print
* Return: no of chars printed
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
