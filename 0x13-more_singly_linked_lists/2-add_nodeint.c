#include "lists.h"
/**
 * add_nodeint -Function that adds a new node beginning linked list.
 * @head: A pointer to the first node in the list.
 * @n: The data to insert in the new node.
 * Return: Returns newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
