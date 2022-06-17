#include <stdio.h>

/**
 * print_alphabet - alpha
 *
 *  Return: Always 0.
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
