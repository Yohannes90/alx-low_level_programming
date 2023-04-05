#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: a pointer to a pointer to head of linked list
 *
 * Return: a pointer to the first node of reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
