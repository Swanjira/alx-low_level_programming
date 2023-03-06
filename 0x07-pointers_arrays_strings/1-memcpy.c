#include "main.h"

/**
 * _memcpy - function that copies a memory area
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: num of bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
