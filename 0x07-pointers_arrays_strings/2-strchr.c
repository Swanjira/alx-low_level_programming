#include "main.h"

/**
 * _strchr - function that locates a char in a string
 * @s: input
 * @c: input value
 *
 * Return: pointer to first occurence of c in s
 * NULL if char not found
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
