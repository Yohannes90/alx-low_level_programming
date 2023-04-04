#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given point
 * @head: pointer to pointer to head fo liked list
 * @idx: the index of the list where new node will be added
 * @n: number/value to be add to new node
 *
 * Return: the address of the new node or if it fails NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current = *head;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL || idx > i)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
