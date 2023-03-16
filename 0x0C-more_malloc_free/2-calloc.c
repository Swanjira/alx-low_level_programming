#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with constant byte
 * @s: memory area to be filled
 * @b: character to copy
 * @n: no of times to copy char
 *
 * Return: pointer to allocated memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
/**
 * *_calloc - allocates memory for array using malloc
 * @nmemb: no of elements in array
 * @size: size of every element
 *
 * Return: pointer to allocated memory
 * if fails return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
