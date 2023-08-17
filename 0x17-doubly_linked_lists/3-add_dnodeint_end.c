#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds new node at the end
 * @head: head of dlistint_t
 * @n: new value to be added
 *
 * Return: new_head if success or NULL if not
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	(*head)->next = new_node;
	new_node->prev = *head;
	*head = h;
	return (new_node);
}
