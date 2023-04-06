#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function to convert binary to unsigned int
 * @b: pointing to string of 0 and 1 chars
 *
 * Return: converted no or 0 if b is NULL
 * or char in string b is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dec_num = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		dec_num = 2 * dec_num + (b[x] - '0');
	}
	return (dec_num);
}
