#include <unistd.h>

/**
 * _putchar - wrties char c to stdout
 * @c: char to be printed
 *
 * Return: 1 on sucess -1 on failure
 */

int _putchar(char c)
{
	return (write(1, &c,1));
}
