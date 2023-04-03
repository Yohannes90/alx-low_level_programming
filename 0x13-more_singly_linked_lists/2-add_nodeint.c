#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds new node at the begining of a linked list
 * @head: pointer to a pointer of the head of the linked list
 * @n: value/number to add to the linked list
 *
 * Return: address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
