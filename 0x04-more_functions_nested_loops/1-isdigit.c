#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: ASCII value of the character
 *
 * Return: 1 (if digit) and 0 (if otherwise)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
