#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: second string
 *
 * Return: difference in length
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

