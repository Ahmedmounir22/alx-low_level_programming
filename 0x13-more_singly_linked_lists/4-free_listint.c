#include "lists.h"

/**
* free_listint - Frees a listint_t list.
* @head: A pointer to the head of the listint_t list.
*/

void free_listint(listint_t *head)
{
	listint_t *node, *temp;

	if(!head)
		return;
	
	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
