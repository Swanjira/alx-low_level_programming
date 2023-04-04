#include "lists.h"

/**
 * free_listint_safe - frees a linked list with a loop
 * @h: pointer to 1st node
 *
 * Return: size of free list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current_node, *temp;
	size_t len = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	current_node = *h;
	*h = NULL;

	while (current_node != NULL)
	{
		len++;
		temp = current_node->next;
		free(current_node);
		if (temp >= current_node)
		{
			break;
			current_node = temp;
		}
	}
	return (len);
}
