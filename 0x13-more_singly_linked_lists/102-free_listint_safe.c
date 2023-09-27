#include "lists.h"
/**
 * free_listint_safe - Function that frees a linked list of listint_t nodes.
 * @head: A pointer to a pointer to the first node in the linked list.
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t nelements = 0;
	int addressd;
	listint_t *cur;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		addressd = *head - (*head)->next;

		if (addressd > 0)
		{
			cur = (*head)->next;
			free(*head);
			*head = cur;
			nelements++;
		}
		else
		{
			free(*head);
			*head = NULL;
			nelements++;
			break;
		}
	}

	*head = NULL;

	return (nelements);
}
