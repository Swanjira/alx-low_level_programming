#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to first node of list
 *
 * Return: deleted data 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int del_data;

	if (*head == NULL)
	{
		return (0);
	}
	del_data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (del_data);
}
