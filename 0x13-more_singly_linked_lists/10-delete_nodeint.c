#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @index: index of node for deletion
 * @head: pointer to 1st elemnt of linked list
 *
 * Return: 1 if sucess -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *before = NULL;
	listint_t *now = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = now->next;
		free(now);
		return (1);
	}
	while (index > 0 && now != NULL)
	{
		before = now;
		now = now->next;
		index--;
	}
	if (now == NULL)
	{
		return (-1);
	}
	before->next = now->next;
	free(now);
	return (1);
}
