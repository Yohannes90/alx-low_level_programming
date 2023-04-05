#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given point
 * @head: pointer to pointer to head fo liked list
 * @idx: the index of the list where new node will be added
 * @n: number/value to be add to new node
 *
 * Return: the address of the new node or if it fails NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        unsigned int i = 0;
        listint_t *new_node;
        listint_t *current = *head;

        new_node = malloc(sizeof(listint_t));
        if (new_node == NULL || head == NULL)
        {
                return (NULL);
        }
        new_node->n = n;
        if (idx == 0)
        {
                new_node->next = NULL;
                *head = new_node;
                return (new_node);
        }
        while (current != NULL && i < idx - 1)
        {
                current = current->next;
                i++;
        }
        new_node->next = current->next;
        current->next = new_node;
        return (new_node);
}
