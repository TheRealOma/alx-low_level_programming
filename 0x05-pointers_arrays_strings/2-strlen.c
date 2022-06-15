#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 * _strlen - command for length of string
 * @s: string used
 *
 * Return: s length.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}

