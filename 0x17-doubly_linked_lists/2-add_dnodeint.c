#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds new node at the begining
 * @head: head od dlistint_t
 * @n: new value to be added
 *
 * Return: new_head if success or NULL if not
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
