#include "main.h"
#include <stdlib.h>

/**
* read_textfile - check description
* Description:reads a text file and prints it to the posix
* @filename:pointer
* @letters:no of letters function should read
* Return:0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t op, re, wr;
char *buffer;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

op = open(filename, O_RDONLY);
re = read(op, buffer, letters);
wr = write(STDOUT_FILENO, buffer, re);

if (op == -1 || re == -1 || wr == -1 || wr != re)
{
free(buffer);
return (0);
}

free(buffer);
close(op);

return (wr);
}
