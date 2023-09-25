#include "lists.h"
/**
 * listint_len - Function to returns the number of elements in a linked list.
 * @h: A pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodenum = 0;

	while (h)
	{
		nodenum++;
		h = h->next;
	}

	return (nodenum);
}
