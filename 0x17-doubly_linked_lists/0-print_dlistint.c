#include "lists.h"

/**
 * print_dlistint - print all elements of dlistsint_t list
 * @h: head of dlistsint
 *
 * Return: if NULL 0, or count
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
