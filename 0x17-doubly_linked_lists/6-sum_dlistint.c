#include "lists.h"

/**
 * sum_dlistint - adde of all the data (n) of a dlistint_t list
 * @head: head of dlistint_t
 *
 * Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
