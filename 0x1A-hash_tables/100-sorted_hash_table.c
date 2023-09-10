#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of an array
 *
 * Return: pointer to a newly created sorted hash table.
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table;
	unsigned long int i;

	shash_table = malloc(sizeof(shash_table_t));
	if (shash_table == NULL)
	{
		return (NULL);
	}
	shash_table->size = size;
	shash_table->array = malloc(size * sizeof(shash_node_t *));
	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		shash_table->array[i] = NULL;
	}
	return (shash_table);
}

/**
 *shash_table_set - adds an element to the sorted hash table
 *@ht: the sorted hash table we want to add or update the key/value to
 *@key: is the key. key can not be an empty string
 *@value: is the value associated with the key, can be an empty string
 *
 *Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *tmp;
	char *value_copy;

	if (ht  == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	value_copy = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(value_copy);
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
		{
			tmp = tmp->snext;
		}
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: is the sorted hash table you want to look into
 * @key:  is the key we are looking for
 *
 * Return: the value associated with the element, or NULL if key not found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
    {
		return (NULL);
	}
	node = ht->shead;
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: is the sorted hash table
 *
 * Return: void
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht != NULL)
	{
		node = ht->shead;
		printf("{");
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->snext;
			if (node != NULL)
			{
				printf(", ");
			}
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: is the sorted hash table
 *
 * Return: void
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht != NULL)
	{
		node = ht->stail;
		printf("{");
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->sprev;
			if (node != NULL)
			{
				printf(", ");
			}
		}
		printf("}\n");
	}
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: is the hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *temp;

	if (ht != NULL)
	{
		node = ht->shead;
		while (node != NULL)
		{
			temp = node->snext;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
		free(head->array);
		free(head);
	}
}