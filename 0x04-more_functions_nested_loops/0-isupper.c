#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: character to be checked
 * Return: 1 if uppercase 0 if other letter
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return(0);
}