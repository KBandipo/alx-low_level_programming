#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodecount = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodecount++;
		h = h->next;
	}

	return (nodecount);
}
