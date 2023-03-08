#include "main.h"

int natural_prime(int n, int a);

/**
 * is_prime_number - tells if a number is prime or not
 * @n: number to be looked at
 *
 * Return: 1 if n is prime 0 if its not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (natural_prime(n, n - 1));
}

/**
 * natural_prime - calcullates if a number is prime recursively
 * @n: number to evaluate
 * @a: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int natural_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (natural_prime(n, a - 1));
}
