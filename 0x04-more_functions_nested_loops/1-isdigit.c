#include "main.h"
/**
 * _isdigit - Checks if a character is a digit
 * @c: The number to be checked
 * Return: 1 if c is digit otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <=57)
		return (1);
	else
		return(0);
}
