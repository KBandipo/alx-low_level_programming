#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len -function to Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of pnodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *sptr, *fptr;
	size_t pnodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	sptr = head->next;
	fptr = (head->next)->next;

	while (fptr)
	{
		if (sptr == fptr)
		{
			sptr = head;
			while (sptr != fptr)
			{
				pnodes++;
				sptr = sptr->next;
				fptr = fptr->next;
			}

			sptr = sptr->next;
			while (sptr != fptr)
			{
				pnodes++;
				sptr = sptr->next;
			}

			return (pnodes);
		}

		sptr = sptr->next;
		fptr = (fptr->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
