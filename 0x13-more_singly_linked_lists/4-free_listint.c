#include "lists.h"

/**
 * free_listint - function that frees linked list
 * @head: linked list
 *
 * Return - free list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
