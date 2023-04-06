#include "main.h"

/**
 * get_bit - returns value of bit at given index
 * @index: index to start
 * @n: number
 *
 * Return: value of index oe -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_index;

	if (index > 63)
	{
		return (-1);
	}
	bit_index = (n >> index) & 1;
	return (bit_index);
}
