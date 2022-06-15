#include <stdio.h>
#include <string.h>

/**
 * _strlen - command for length of string
 * @s: string used
 *
 * Return: string length.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}

