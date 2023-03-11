#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: char to be printed
 *
 * Return: 1 on success
 * on error return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
