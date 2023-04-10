#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - gives 1024 bytes to buffer
 * @file: filename to store chars
 *
 * Return: pointer to new buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Cannot write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes file descriptor
 * @file_desc: file desc to close
 *
 * Return: closed file
 */

void close_file(int file_desc)
{
	int x;

	x = close(file_desc);

	if (x == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Cannot close file_dec %d\n", file_desc);
		exit(100);
	}
}

/**
 * main - yanks content of file 1 to file 2
 * @argc: no of args
 * @argv: array of pointers to args
 *
 * Return: on success 0
 */

int main(int argc, char *argv[])
{
	int f1, f2, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_f1 file_f2\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	f1 = open(argv[1], O_RDONLY);
	r = read(f1, buffer, 1024);
	f2 = open(argv[2], O_CREAT | O_WRONLY |O_TRUNC, 0664);

	do{
		if (f1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Cannot read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(f2, buffer, r);
		if (f2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Cannot write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(f1, buffer, 1024);
		f2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(f1);
	close_file(f2);
	return (0);
}
