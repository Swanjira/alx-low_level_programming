#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string
 *
 * Return: 1 on success -1 on failure
 * if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_description, w, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	file_description = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file_description, text_content, length);

	if (file_description == -1 || w == -1)
	{
		return (-1);
	}
	close(file_description);
	return (1);
}
