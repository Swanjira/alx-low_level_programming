#include "main.h"

/**
 * _memset - fills first n bytes of memory area
 * pointed by @s with constant byte
 * @s: starting address to be filled
 * @b: the desired value
 * @n: number of bytes to be filled
 *
 * Return: pointer to memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
