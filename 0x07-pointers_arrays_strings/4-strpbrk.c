#include "main.h"

/**
 * _strpbrk - function that searches string in any set of bytes
 * @s: input value
 * @accept: input
 *
 * Return: pointer to the byte in s
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
			s++;
		}
		return ('\0');
}	
