#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node and returns its data
 * @head: pointer to pointer to head of linked list
 *
 * Return: the head's data(n) or if empty 0
 */
int pop_listint(listint_t **head)
{
	int number;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (number);
}
