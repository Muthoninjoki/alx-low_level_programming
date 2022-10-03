#include "hash_tables.h"

/**
* Key_index - Get the index at which a key pair should be stored
* Description: uses the djb2 algorithm
* @key: key
* @size:size of array of the hash table
* Return:index at which the key/value pair should be
* stored in the array of the hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
