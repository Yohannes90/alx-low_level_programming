#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees malloced memory of a linked list
 * @head: pointer to head of linke list to be freed
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
