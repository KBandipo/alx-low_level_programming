#include "lists.h"
/**
 * get_nodeint_at_index - Function that Retrieves a node at a
 * specific index in a linked list.
 * @head: The first node of the linked list.
 * @index: The index of the node to retrieve.
 * Return: A pointer to the desired node, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *cur = head;

	while (cur && a < index)
	{
		cur = cur->next;
	a++;
	}

	return (cur ? cur : NULL);
}
