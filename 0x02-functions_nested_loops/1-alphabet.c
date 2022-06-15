#include <stdio.h>

/**
 *  main - check the code
 *
 *  Return: Always 0.
 */

int print_alphabet(void)
{
	int x = 97;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	putchar(10);
	return (0);
}
