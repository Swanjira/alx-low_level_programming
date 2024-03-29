#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of parameters
 * @n: no of parameters passed
 * @...: variable no of params to calculate sum
 *
 * Return: if n == 0 return 0
 * else return sum of params
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, sum = 0;

	va_start(ap, n);

	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
