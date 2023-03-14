#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars initializes with specific char
 * @size: size of array
 * @c: character to be assigned
 *
 * Return: pointer to array if succesful
 * NULL if not succesful
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
