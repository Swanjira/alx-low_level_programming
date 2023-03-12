#include "main.h"

/**
 * _strchr - entry point
 * @s: input
 * @c: input
 *
 * Return: 0 on success
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
