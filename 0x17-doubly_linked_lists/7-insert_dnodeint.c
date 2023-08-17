#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - adds new node at index
 * @h: head of dlistint_t
 * @idx: the index of the list where the new node should be added, starts at 0
 * @n: new value to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i;

	if (new_node == NULL || h == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (current->next == NULL && i == idx - 1)
		{
			new_node = add_dnodeint_end(h, n);
			return (new_node);
		}
		current = current->next;
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = current->next;
	new_node->prev = current;
	current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
