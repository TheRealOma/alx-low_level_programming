#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: second string
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int n;

	i = 0;
	n = 0;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

