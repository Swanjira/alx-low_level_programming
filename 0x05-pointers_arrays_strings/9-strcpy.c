#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: destination to copy to
 * @src: destination to copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < 1; b++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
