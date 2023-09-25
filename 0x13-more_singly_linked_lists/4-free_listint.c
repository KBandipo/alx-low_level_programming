#include "lists.h"
/**
 * free_listint - Function that frees a linked list of listint_t nodes.
 * @head: A pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *curnode;

	while (head)
	{
		curnode = head->next;
		free(head);
		head = curnode;
	}
}
