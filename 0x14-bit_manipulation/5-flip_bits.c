#include "main.h"

/**
 * flip_bits - function to return no of bits needed
 * to flip to get to anor no
 * @n: num 1
 * @m: num 2
 *
 * Return: no of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, flips = 0;

	unsigned long int now;
	unsigned long int whole = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		now = whole >> x;
		if (now & 1)
		{
			flips++;
		}
	}
	return (flips);
}
