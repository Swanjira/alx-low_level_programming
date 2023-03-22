#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int bytes, x;
	void *arr;

	if (argc != 2)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}
	arr = (void *) main;

	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n ", *((char *) arr + x));
			break;
		}
		printf("%02hhx ", *((char *) arr + x));
	}
	return (EXIT_SUCCESS);
}
