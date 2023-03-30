#include <stdlib.h>
#include "lists.h"

/**
 * list_len -  returns the no of elements in a linked list_t list
 * @h: pointer to list_t
 *
 * Return: no of elemnts in h
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
