#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: char to be checked
 *
 * Return: 1 if c is alphabet otherwise return 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
