#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of array
 * Return:pointer to newly created hash btable
 *        otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;

	hash_t = malloc(sizeof(hash_table_t));
	hash_t->size = size;
	hash_t->count = 0;
	hash_t->array = calloc(hash_t->size, sizeof(hash_node_t*));
	for (int i = 0; i < hash_t->size; i++)
	{
		hash_t->array[i] = NULL
	}
	return hash_t
}


