#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: file name
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success -1 on failure
 * If filename is NULL return -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, length);

	if (w == -1 || fd == -1)
	{
		return (-1);
	}
		close(fd);
		return (1);
}
