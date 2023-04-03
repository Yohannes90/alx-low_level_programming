#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to head of the linked list to be printed
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
