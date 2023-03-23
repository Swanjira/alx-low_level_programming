#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of ints
 * @a: num 1
 * @b: num 2
 *
 * Return: sum a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of ints
 * @a: num 1
 * @b: num 2
 *
 * Return: diff a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of two ints
 * @a: num 1
 * @b: num 2
 *
 * Return: product a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns div of two nums
 * @a: num 1
 * @b: num 2
 *
 * Return: quotient value of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns rem of div two nums
 * @a: num 1
 * @b: num 2
 *
 * Return: rem of div a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
