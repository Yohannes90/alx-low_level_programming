#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of linked list
 * @head: pointer to head of linked list
 *
 * Return: sum or if empty 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
