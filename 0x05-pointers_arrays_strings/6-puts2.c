#include "main.h"

/**
 * puts2 - prints string starting with first character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int a = 0;
	chat *b = str;
	int c;

	while (*b != '\0')
	{
		b++;
		longi++;
	}
	a = longi - 1;
	for (c = 0; c <= a; c++)
	{
		if (c % 2 == 0)
		{
			putchar(str[c]);
		}
	}
	putchar('\n');
}
