#include "lists.h"
/**
 * find_listint_loop - Function that finds the loop in a linked list.
 * @head: A pointer to the linked list to search for.
 * Return: The address of the node where the loop starts,
 * or NULL if there's no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sptr = head;
	listint_t *fptr = head;

	if (!head)
		return (NULL);

	while (sptr && fptr && fptr->next)
	{
		fptr = fptr->next->next;
		sptr = sptr->next;

		if (fptr == sptr)
		{
			sptr = head;
			while (sptr != fptr)
			{
				sptr = sptr->next;
				fptr = fptr->next;
			}
			return (fptr);
		}
	}

	return (NULL);
}
