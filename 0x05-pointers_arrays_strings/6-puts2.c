#include "main.h"

/**
 * puts2 - print certain characters of a string
 * @str: string used
 *
 * Return: void so no return
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
