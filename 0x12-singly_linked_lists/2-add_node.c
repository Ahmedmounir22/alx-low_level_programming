nclude "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head of linked list
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0; /* counter variable to keep track of number of nodes */

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
