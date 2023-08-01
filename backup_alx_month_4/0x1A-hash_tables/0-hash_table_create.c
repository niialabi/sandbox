#include "hash_tables.h"
/**
 * hash_table_create - func creates hash table
 * @size: size of array
 *
 * Return: hash table pinter
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *spawn_table;

	spawn_table = malloc(sizeof(hash_table_t));
	if (spawn_table == NULL)
		return (NULL);
	spawn_table->size = size;
	spawn_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!spawn_table->array)
		return (NULL);
	return (spawn_table);

}
