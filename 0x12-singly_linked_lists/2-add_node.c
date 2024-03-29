#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node at beg of list_t
 * @head: double pointer to list_t
 * @str: new string to add to node
 *
 * Return: address of the new element
 * NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
