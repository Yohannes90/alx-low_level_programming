#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free a linked list
 * @head: a pointer to a pointer to head of linked list to be freed
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
