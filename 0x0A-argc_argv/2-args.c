#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments
 * @argc: counts no. of arguments
 * @argv: arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
