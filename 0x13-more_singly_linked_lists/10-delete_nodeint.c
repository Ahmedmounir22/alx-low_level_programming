#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at
 *	index index of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if the deletion succeeded, or -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *temp_node;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	current_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	while (current_node != NULL && count < index - 1)
	{
		current_node = current_node->next;
		count++;
	}

	if (current_node == NULL || current_node->next == NULL)
	{
		return (-1);
	}

	temp_node = current_node->next;
	current_node->next = temp_node->next;
	free(temp_node);

	return (1);
}
