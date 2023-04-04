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
	unsigned int i = 1;
	listint_t *current = *head;
	listint_t *temp;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	while (current != NULL && i < idx)
	{
		current = current->next;
		i++;
	}
	temp = current->next;
	current->next = new_node;
	new_node->next = temp;
	return (*head);
}
