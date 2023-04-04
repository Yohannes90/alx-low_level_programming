#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to head of the linked list
 * @index: the index of the node to be returned
 *
 * Return: node at index or if it doesn't exist NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL && index > count)
	{
		head = head->next;
		count++;
	}
	return (head);
}
