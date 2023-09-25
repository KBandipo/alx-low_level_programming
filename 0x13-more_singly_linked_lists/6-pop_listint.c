#include "lists.h"
/**
 * pop_listint - Function that deletes the head node of a linked list.
 * @head: Pointer to the first element in the linked list.
 * Return: Return the deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *curnode;
	int nodedelete;

	if (!head || !*head)
		return (0);

	nodedelete = (*head)->n;
	curnode = (*head)->next;
	free(*head);
	*head = curnode;

	return (nodedelete);
}

