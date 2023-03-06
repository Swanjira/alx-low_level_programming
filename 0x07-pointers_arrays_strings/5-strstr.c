#include "main.h"

/**
 * _strstr - function that finds 1st occurence
 * of substring needle in string haystack
 * @haystack: input
 * @needle: input
 *
 * Return: pointer to beginning of located substring
 * NULL if substring not foun
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
