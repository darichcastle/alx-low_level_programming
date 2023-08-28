#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node = calloc(1, sizeof(listint_t));
    new_node->n = n;
    
    if (*head == NULL) {
        *head = new_node;
    } else {
        new_node->next = *head;
	*head = new_node;
    }

    return new_node;
}
