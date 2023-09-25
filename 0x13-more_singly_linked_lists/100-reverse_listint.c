#include "lists.h"
/**
 * reverse_listint -Function that reverses a linked list.
 * @head: A pointer to the first node in the list.
 * Return: A pointer to the first node in the new list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		cur = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = cur;
	}

	*head = prev;

	return (*head);
}
