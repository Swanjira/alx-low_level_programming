#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 1 if little edian 0 if big
 */

int get_endianness(void)
{
	unsigned int val = 1;

	char *c = (char *)&val;

	if (*c == 1)
	{
		return (1);
	}
	else
		return (0);
}
