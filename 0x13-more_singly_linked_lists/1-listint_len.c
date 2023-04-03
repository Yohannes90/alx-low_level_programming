#include "lists.h"

/**
 * listint_len - returns the number of elements in a linkedlist
 * @h: pointer to head of linked list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
