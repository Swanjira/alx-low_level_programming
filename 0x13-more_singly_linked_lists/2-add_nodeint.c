#include "lists.h"

/**
 * add_nodeint - adds new node at beg of linked list
 * @head: pointer to first node
 * @n: new data to insert
 *
 * Return: address of new elemnt NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
