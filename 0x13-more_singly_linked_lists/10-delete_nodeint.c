#include "lists.h"
/**
 * delete_nodeint_at_index - Function deletes a node
 * in a linked list at a certain index.
 * @head: A pointer to the first element in the list.
 * @index: Index of the node to delete.
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curnode = *head;
	listint_t *prevnode = NULL;
	unsigned int curindex = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(curnode);
		return (1);
	}

	while (curindex < index - 1)
	{
		if (!curnode || !(curnode->next))
			return (-1);
		curnode = curnode->next;
		curindex++;
	}

	prevnode = curnode;
	curnode = curnode->next;
	prevnode->next = curnode->next;
	free(curnode);

	return (1);
}
