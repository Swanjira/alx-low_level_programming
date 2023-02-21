#include <unistd.h>
/**
 * _putchar writes the characterc to stdout
 * @c: the character to print
 * Returns on success 1
 * On error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
