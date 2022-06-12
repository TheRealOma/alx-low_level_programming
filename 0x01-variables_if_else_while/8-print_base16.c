#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int y = 48;
	int x = 97;

	while (y <= 57)
	{
		putchar(y);
		y++;
	}

	while (x <= 102)
	{
		putchar(x);
		x++;
	}
	putchar(10);
	return (0);
}
