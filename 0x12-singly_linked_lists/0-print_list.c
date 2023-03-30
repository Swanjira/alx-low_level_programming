#include <stdio.h>
#include "lists.h"

/**
 * print_list - function prints all the elements of a list_t list
 * @h: pointer to list_t
 *
 * Return: no of nodes
 * If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
