#include "lists.h"

/**
 * list_len - returns the numbers of elements of a linked list
 * @h: head of list_t
 *
 * Return: number of elements of linked list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
