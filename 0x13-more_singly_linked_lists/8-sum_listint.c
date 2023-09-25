#include "lists.h"
/**
 * sum_listint - A function that calculates
 * the sum of all the data in a listint_t list.
 * @head: A pointer to the first node in the linked list.
 * Return: The result
 */
int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *curnode = head;

	while (curnode)
	{
		result += curnode->n;
		curnode = curnode->next;
	}

	return (result);
}
