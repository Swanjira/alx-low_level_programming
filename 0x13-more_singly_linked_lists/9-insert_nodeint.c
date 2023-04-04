#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @idx: index of list where new node is inserted
 * @head: pointer to 1st node
 * @n: data for new node
 *
 * Return: address of new node NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	listint_t *current_node = *head;

	for ( x = 0; x < idx - 1; x++)
	{
		if (current_node == NULL)
			return (NULL);
		current_node = current_node->next;
	}
	if (current_node == NULL)
		return (NULL);
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
