#include "lists.h"

/**
 * dlistint_len - return number of elements in a lnked dlistint_t list
 * @h: head of dlistint_t
 * 
 * Return: count of elements in dlistint_t 
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (count);
	}
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
