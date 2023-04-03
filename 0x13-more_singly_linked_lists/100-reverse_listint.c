#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: pointer to pointer of first node
 *
 * Return: pointer to 1st node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	return (prev);
}
