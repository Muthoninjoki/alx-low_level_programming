#include "hash_tables.h"
#include <stdlib.h>

/**
* key_index - Get the index at which a key pair should be stored
* @key: key
* @size:size of array of the hash table
* Return:index at which the key/value pair should be
* stored in the array of the hash table
*
* Description:Uses the djb2 algorithm
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
