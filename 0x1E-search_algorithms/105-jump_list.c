#include "search_algos.h"

/**
  * jump_list - Searches value in a sorted linked list of with jump search
  * @list: pointer to the head of the linked list to search in
  * @size: number of nodes in the list
  * @value: value to search for
  *
  * Return: a pointer to the first node of value if present else NULL
  */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL)
	{
		return (NULL);
	}

	step = 0;
	step_size = sqrt(size);
	node = jump = list;
	while (jump->index + 1 < size && jump->n < value)
	{
		node = jump;
		step += step_size;
		while (jump->index < step)
		{
			if (jump->index + 1 == size)
			{
				break;
			}
			jump = jump->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
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
