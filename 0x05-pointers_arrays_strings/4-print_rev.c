#include <stdio.h>

/**
 * print_rev - prints strings in reverse
 * @s: string used
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;	
	while (i >= 0)
	{
		_putchar (*(s + 1));
		i--;
	}
	_putchar ("\n");
}
