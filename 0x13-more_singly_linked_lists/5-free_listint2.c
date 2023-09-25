#include "lists.h"
/**
 * free_listint2 -Function that frees a linked list of listint_t nodes.
 * @head: A pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *cur;

	if (head == NULL)
		return;

	while (*head)
	{
		cur = (*head)->next;
		free(*head);
		*head = cur;
	}

	*head = NULL;
}
