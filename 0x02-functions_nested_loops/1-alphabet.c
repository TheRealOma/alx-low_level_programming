#include <stdio.h>

/**
 *  main - print alphabet in lowercase
 *
 *  Return: Always 0.
 */

void print_alphabet(void)
{
	int x = 97;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	putchar(10);
}
