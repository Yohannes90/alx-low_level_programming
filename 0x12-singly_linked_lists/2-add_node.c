#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node node at the begining of a linked list
 * @head: pointer to pointer of head of list
 * @str: pointer to string to be added
 *
 * Return: pointer to added string
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
