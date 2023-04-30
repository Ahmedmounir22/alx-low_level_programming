#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of linked list
 * Return: number of nodes in linked list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	/* counter variable to keep track of number of nodes */

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}