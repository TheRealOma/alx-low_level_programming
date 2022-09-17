#include "main.h"

/**
 * more_numbers - prints 10 times the number, from 0 to 14
 * followed by a new line
 *
 * Return: void
 */

void more_nummbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
				_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
