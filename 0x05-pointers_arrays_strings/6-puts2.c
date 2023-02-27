#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints string starting with first character
 * @str: input string
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0
	int c;

	while (str[longi] != '\0')
	{
		longi++;
	}
	for (c = 0; c < longi; c += 2)
		{
			putchar(str[c]);
		}
	putchar('\n');
}
