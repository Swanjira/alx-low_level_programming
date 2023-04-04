#include "lists.h"

/**
 * find_listint_loop - finds loop in linked list
 * @head: linked list
 *
 * Return: address of the node where the loop starts
 * NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x = head;
	listint_t *y = head;

	if (!head)
	{
		return (NULL);
	}
	while (x && y && y->next)
	{
		y = y->next->next;
		x = x->next;
		if (y == x)
		{
			x = head;
			while (x != y)
			{
				x = x->next;
				y = y->next;
			}
			return (y);
		}
	}
	return (NULL);
}
