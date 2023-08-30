#include "lists.h"
/**
 * pop_listint- Deletes the head node of a listint_t linked list
 * @head: - Pointer to the first element to be freed
 * temp_node - points to the headis a pointer that starts at the
 * head of the listused to temporarily hold the reference to the
 * current head node.
 * node before we move to the next one
 * Return: return value
 * Author: Benedict Eneluwe
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node = *head;
	int value = temp_node->n;

	if (head == NULL || *head == NULL)
	return (0);

	*head = (*head)->next;
	free(temp_node);

	return (value);
}
