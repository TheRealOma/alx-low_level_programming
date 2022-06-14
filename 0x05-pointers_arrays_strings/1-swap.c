#include <stdio.h>

/**
 * main - check the code
 *
 * Results: same as always
 */

void swap_int(int *a, int *b)
{
	int random_variable = *a;
	*a = *b;
	*b = random_variable;

}
