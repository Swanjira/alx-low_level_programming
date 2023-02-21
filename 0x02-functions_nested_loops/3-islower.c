#include "main.h"
/**
 * _islower checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for the lowecase character or 0 for other output
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}


