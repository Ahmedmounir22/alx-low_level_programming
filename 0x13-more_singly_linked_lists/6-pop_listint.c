#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *               and returns the head node's data (n).
 * @head: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *current_node;

	if (*head == NULL)
	{
		return (0);
	}

	current_node = *head;
	data = current_node->n;
	*head = current_node->next;
	free(current_node);

	return (data);
}
