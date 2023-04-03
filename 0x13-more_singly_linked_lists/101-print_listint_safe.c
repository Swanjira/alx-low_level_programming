#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints linked list
 * @head: pointer to 1st node of list
 *
 * Return: no of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	/*current and visited nodes*/
	const listint_t *a;
	const listint_t *b[1024];
	size_t count = 0;
	unsigned int x;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		b[count] = head;
		count++;
		if (count == 1024)
		{
			fprintf(stderr, "Error: The list is too long\n");
			exit(98);
		}
		a = head->next;
		for (x = 0; x < count; x++)
		{
			if (b[x] == a)
			{
				printf("-> [%p] %d\n", (void *)a, a->n);
				fprintf(stderr, "Error: This is an infinite loop\n");
				exit(98);
			}
		}
		head = a;
	}
	return (count);
}
