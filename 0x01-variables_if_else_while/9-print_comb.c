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
	int x = 48;

	while (x <= 57)
	{
		putchar(x);
		x++;
		if (x<10)
			putchar(44);
			putchar(32);
	}
	putchar(10);
	return (0);
}
