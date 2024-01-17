#include "search_algos.h"

/**
  * linear_skip - Searches value in a sorted linked list of with linear skip
  * @list: pointer to the head of the linked list to search in
  * @value: value to search for
  *
  * Return: a pointer to the first node of value if present else NULL
  */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
	{
		return (NULL);
	}
	node = jump = list;
	while (jump->next != NULL && jump->n < value)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
			{
				jump = jump->next;
			}
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	while (node->index < jump->index && node->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		node = node->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
