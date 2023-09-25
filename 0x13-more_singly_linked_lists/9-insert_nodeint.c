#include "lists.h"
/**
 * insert_nodeint_at_index - Function that inserts
 * a new node in a linked list at a given position.
 * @head: Pointer to the first node in the list.
 * @idx: Index where the new node is added.
 * @n: Data to insert in the new node.
 * Return: Address of the new node, or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *newnode;
	listint_t *curnode = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (a = 0; curnode && a < idx; a++)
	{
		if (a == idx - 1)
		{
			newnode->next = curnode->next;
			curnode->next = newnode;
			return (newnode);
		}
		else
			curnode = curnode->next;
	}

	return (NULL);
}
