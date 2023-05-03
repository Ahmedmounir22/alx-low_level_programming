#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The address of the node where the loop starts,
 *	or NULL if there is no loop.
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_node = head, *fast_node = head;

	while (slow_node != NULL && fast_node != NULL && fast_node->next != NULL)
	{
		slow_node = slow_node->next;
		fast_node = fast_node->next->next;
		if (slow_node == fast_node)
		{
			slow_node = head;
			while (slow_node != fast_node)
			{
				slow_node = slow_node->next;
				fast_node = fast_node->next;
			}
			return (slow_node);
		}
	}

	return (NULL);
}
