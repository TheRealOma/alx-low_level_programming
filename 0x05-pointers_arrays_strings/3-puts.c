#include <stdio.h>
#include "main.h"

/**
 * _puts - Print string (but is this compulsory)
 * @str: string used
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
