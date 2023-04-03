#include "lists.h"

/**
 * sum_listint - function to return sum of data in linked list
 * @head: 1st node of linked list
 *
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum_data = 0;

	while (head != NULL)
	{
		sum_data += head->n;
		head = head->next;
	}
	return (sum_data);
}
