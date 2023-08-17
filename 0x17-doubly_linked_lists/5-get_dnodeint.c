#include "lists.h"

/**
 * get_dlistint_at_index - returns the nth node of a dlistint_t list
 * @head: head of dlistint_t
 * @index: index is the index of the node, starting from 0
 *
 * Return: nth node of a dlistint_t else NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth_node = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		nth_node = nth_node->next;
		if (nth_node == NULL)
		{
			return NULL;
		}
	}
	return (nth_node);
}
