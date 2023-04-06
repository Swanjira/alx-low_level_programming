#include "main.h"

/**
 * set_bit - sets val of bit to 1 at given index
 * @index: index to start
 * @n: number
 *
 * Return: if success 1 -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = ((1UL << index) | *n);
	return (1);
	if (index > 63)
		return (-1);
}
