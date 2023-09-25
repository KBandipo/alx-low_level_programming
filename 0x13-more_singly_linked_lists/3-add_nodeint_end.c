#include "lists.h"
/**
 * add_nodeint_end -Function that adds a node at the end of a linked list.
 * @head: A pointer to the first element in the list.
 * @n: The data to insert in the new element.
 * Return: A pointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *curnode = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (curnode->next)
		curnode = curnode->next;

	curnode->next = newnode;

	return (newnode);
}
