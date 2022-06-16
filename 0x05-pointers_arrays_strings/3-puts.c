#include <stdio.h>
#include "main.h"

/**
 * 
 * @s: string used
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar("\n");
}
