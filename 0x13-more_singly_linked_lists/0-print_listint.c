#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elemnts in linked list
 * @h: linked list to print
 *
 * Return: no of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
