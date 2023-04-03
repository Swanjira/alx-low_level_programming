#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of linked list
 * @index: index of node to be returned
 * @head: first node of linked list
 *
 * Return: NULL if node desnt't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t **p = &head;

	while (index > 0 && *p != NULL)
	{
		p = &(*p)->next;
		index--;
	}
	return (*p != NULL && index == 0) ? *p : NULL;
}
