#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current_node, *temp_node;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	current_node = *h;
	while (current_node != NULL)
	{
		count++;
		temp_node = current_node;
		current_node = current_node->next;
		free(temp_node);
		if (temp_node <= current_node)
		{
			*h = NULL;
			exit(98);
		}
	}

	*h = NULL;
	return (count);
}
