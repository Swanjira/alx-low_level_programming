#include "main.h"
/**
 * main - prints alphabets ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	while (i <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
			_putchar('\n');
			i++;
		}
	}
}

