#include <stdio.h>

/**
 * main - check the code
 *
 * Results: same as always
 */

int main(void)
{
	int n;
	int *reset_to_98 = &n;
	*reset_to_98 = 98;
	putchar(*reset_to_98);
	return(0);
}
