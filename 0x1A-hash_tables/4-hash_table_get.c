#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key:  is the key we are looking for
 *
 * Return: the value associated with the element, or NULL if key not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nodo;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	nodo = ht->array[index];
	while (nodo != NULL)
	{
		if (strcmp(nodo->key, key) == 0)
		{
			return (nodo->value);
		}
		nodo = nodo->next;
	}
	return (NULL);
}
