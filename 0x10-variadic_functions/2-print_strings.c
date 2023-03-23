#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strs folloed by new line
 * @separator: str printed btwn strs
 * @n: no of strs passed to func
 * @...: variable no of strs to print
 *
 * Return: if separator = NULL do not print
 * if str = NULL print (nil)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int x;

	va_start(strings, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
