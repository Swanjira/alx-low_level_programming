#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @min: min range of values stored
 * @max: max range of values stored
 * and number of elemnts
 *
 * Return: pointer to the newly created array
 * if min > max, return NULL
 * if malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *ptr;

	int x, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (x = 0; min <= max; x++)
		ptr[x] = min++;
	return (ptr);
}
