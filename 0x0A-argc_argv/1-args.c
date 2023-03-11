#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguemnts
 * @argc: counts arguments
 * @argv: arguments passed
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
