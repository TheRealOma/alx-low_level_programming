#include "main.h"

/**
 * _isupper - checks if a character is an uppercase letter
 * @c: ASCII value of the character
 *
 * Return: 1 (if uppercase), 0 (lowercase)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
