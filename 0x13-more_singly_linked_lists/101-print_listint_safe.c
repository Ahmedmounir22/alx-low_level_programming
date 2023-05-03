#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current_node = head, *temp_node;

	while (current_node != NULL)
	{
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		count++;
		temp_node = current_node;
		current_node = current_node->next;
		if (temp_node <= current_node)
		{
			printf("-> [%p] %d\n", (void *)current_node, current_node->n);
			exit(98);
		}
	}

	return (count);
}
