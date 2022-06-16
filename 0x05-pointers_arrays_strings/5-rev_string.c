#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints strings in reverse
 * @s: string used
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	/**while (*(s + i))
		i++;
	i = i - 1;*/
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
}
