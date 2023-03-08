#include "main.h"

int natural_sqrt_recursion(int n, int a);

/**_sqrt_recursion - returns natural sqrt of a number
 * @n: number whose sqrt is to be calculated
 *
 * Return: resulting sqrt
 * or -1 if number lacks natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt_recursion - recurses to find sqrt of a number
 * @n: number whose sqrt is to be calculated
 * @a: iterator
 *
 * Return: resulting sqrt
 */

int natural_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (natural_sqrt_recursion(n, a + 1));
}

